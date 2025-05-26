# -*- coding: utf-8 -*-
salida = ''
entrada = raw_input()
print entrada
for elemento in entrada:
        if elemento.isdigit() == True:
            salida += elemento
print salida
