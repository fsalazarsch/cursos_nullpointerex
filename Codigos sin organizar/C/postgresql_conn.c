#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

int main(int argc, char *argv[]) {
    PGconn *conn;
    PGresult *res;
    const char *conninfo;
    const char *sql;

    // Información de conexión a la base de datos
    conninfo = "dbname=mydatabase host=localhost user=myusername password=mypassword";
    
    // Establecer la conexión
    conn = PQconnectdb(conninfo);

    // Comprobar si la conexión se estableció correctamente
    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Error de conexión: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);
    }

    // Ejecutar una consulta SQL
    sql = "SELECT * FROM mytable";
    res = PQexec(conn, sql);

    // Comprobar si la consulta se ejecutó correctamente
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Error de consulta: %s\n", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }

    // Procesar los resultados de la consulta
    int num_rows = PQntuples(res);
    int num_cols = PQnfields(res);
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            printf("%s\t", PQgetvalue(res, i, j));
        }
        printf("\n");
    }

    // Liberar los resultados y cerrar la conexión
    PQclear(res);
    PQfinish(conn);

    return 0;
}
