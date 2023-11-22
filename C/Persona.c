#ifndef __STDOUT__
#define __STDOUT__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <cJSON.h>
#include <hashtable.h>
#include <list.h>

#ifndef cJSON_Bool
#define cJSON_Bool (cJSON_True | cJSON_False)
#endif
#ifndef cJSON_Map
#define cJSON_Map (1 << 16)
#endif
#ifndef cJSON_Enum
#define cJSON_Enum (1 << 17)
#endif

struct Persona {
    char * nombre;
    char * apellido_p;
    char * detalle;
};

struct Personas {
    list_t * value;
};

struct Persona * cJSON_ParsePersona(const char * s);
struct Persona * cJSON_GetPersonaValue(const cJSON * j);
cJSON * cJSON_CreatePersona(const struct Persona * x);
char * cJSON_PrintPersona(const struct Persona * x);
void cJSON_DeletePersona(struct Persona * x);

struct Personas * cJSON_ParsePersonas(const char * s);
struct Personas * cJSON_GetPersonasValue(const cJSON * j);
cJSON * cJSON_CreatePersonas(const struct Personas * x);
char * cJSON_PrintPersonas(const struct Personas * x);
void cJSON_DeletePersonas(struct Personas * x);

struct Persona * cJSON_ParsePersona(const char * s) {
    struct Persona * x = NULL;
    if (NULL != s) {
        cJSON * j = cJSON_Parse(s);
        if (NULL != j) {
            x = cJSON_GetPersonaValue(j);
            cJSON_Delete(j);
        }
    }
    return x;
}

struct Persona * cJSON_GetPersonaValue(const cJSON * j) {
    struct Persona * x = NULL;
    if (NULL != j) {
        if (NULL != (x = cJSON_malloc(sizeof(struct Persona)))) {
            memset(x, 0, sizeof(struct Persona));
            if (cJSON_HasObjectItem(j, "nombre")) {
                x->nombre = strdup(cJSON_GetStringValue(cJSON_GetObjectItemCaseSensitive(j, "nombre")));
            }
            else {
                if (NULL != (x->nombre = cJSON_malloc(sizeof(char)))) {
                    x->nombre[0] = '\0';
                }
            }
            if (cJSON_HasObjectItem(j, "apellido_p")) {
                x->apellido_p = strdup(cJSON_GetStringValue(cJSON_GetObjectItemCaseSensitive(j, "apellido_p")));
            }
            else {
                if (NULL != (x->apellido_p = cJSON_malloc(sizeof(char)))) {
                    x->apellido_p[0] = '\0';
                }
            }
            if (cJSON_HasObjectItem(j, "detalle")) {
                x->detalle = strdup(cJSON_GetStringValue(cJSON_GetObjectItemCaseSensitive(j, "detalle")));
            }
            else {
                if (NULL != (x->detalle = cJSON_malloc(sizeof(char)))) {
                    x->detalle[0] = '\0';
                }
            }
        }
    }
    return x;
}

cJSON * cJSON_CreatePersona(const struct Persona * x) {
    cJSON * j = NULL;
    if (NULL != x) {
        if (NULL != (j = cJSON_CreateObject())) {
            if (NULL != x->nombre) {
                cJSON_AddStringToObject(j, "nombre", x->nombre);
            }
            else {
                cJSON_AddStringToObject(j, "nombre", "");
            }
            if (NULL != x->apellido_p) {
                cJSON_AddStringToObject(j, "apellido_p", x->apellido_p);
            }
            else {
                cJSON_AddStringToObject(j, "apellido_p", "");
            }
            if (NULL != x->detalle) {
                cJSON_AddStringToObject(j, "detalle", x->detalle);
            }
            else {
                cJSON_AddStringToObject(j, "detalle", "");
            }
        }
    }
    return j;
}

char * cJSON_PrintPersona(const struct Persona * x) {
    char * s = NULL;
    if (NULL != x) {
        cJSON * j = cJSON_CreatePersona(x);
        if (NULL != j) {
            s = cJSON_Print(j);
            cJSON_Delete(j);
        }
    }
    return s;
}

void cJSON_DeletePersona(struct Persona * x) {
    if (NULL != x) {
        if (NULL != x->nombre) {
            cJSON_free(x->nombre);
        }
        if (NULL != x->apellido_p) {
            cJSON_free(x->apellido_p);
        }
        if (NULL != x->detalle) {
            cJSON_free(x->detalle);
        }
        cJSON_free(x);
    }
}

struct Personas * cJSON_ParsePersonas(const char * s) {
    struct Personas * x = NULL;
    if (NULL != s) {
        cJSON * j = cJSON_Parse(s);
        if (NULL != j) {
            x = cJSON_GetPersonasValue(j);
            cJSON_Delete(j);
        }
    }
    return x;
}

struct Personas * cJSON_GetPersonasValue(const cJSON * j) {
    struct Personas * x = NULL;
    if (NULL != j) {
        if (NULL != (x = cJSON_malloc(sizeof(struct Personas)))) {
            memset(x, 0, sizeof(struct Personas));
            x->value = list_create(false, NULL);
            if (NULL != x->value) {
                cJSON * e = NULL;
                cJSON_ArrayForEach(e, j) {
                    list_add_tail(x->value, cJSON_GetPersonaValue(e), sizeof(struct Persona *));
                }
            }
        }
    }
    return x;
}

cJSON * cJSON_CreatePersonas(const struct Personas * x) {
    cJSON * j = NULL;
    if (NULL != x) {
        if (NULL != x->value) {
            j = cJSON_CreateArray();
            if (NULL != j) {
                struct Persona * x1 = list_get_head(x->value);
                while (NULL != x1) {
                    cJSON_AddItemToArray(j, cJSON_CreatePersona(x1));
                    x1 = list_get_next(x->value);
                }
            }
        }
    }
    return j;
}

char * cJSON_PrintPersonas(const struct Personas * x) {
    char * s = NULL;
    if (NULL != x) {
        cJSON * j = cJSON_CreatePersonas(x);
        if (NULL != j) {
            s = cJSON_Print(j);
            cJSON_Delete(j);
        }
    }
    return s;
}

void cJSON_DeletePersonas(struct Personas * x) {
    if (NULL != x) {
        if (NULL != x->value) {
            struct Persona * x1 = list_get_head(x->value);
            while (NULL != x1) {
                cJSON_DeletePersona(x1);
                x1 = list_get_next(x->value);
            }
            list_release(x->value);
        }
        cJSON_free(x);
    }
}

#ifdef __cplusplus
}
#endif

#endif
