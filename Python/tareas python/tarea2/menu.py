#!/usr/bin/python

import funciones
from Tkinter import *

def  menu():
	print('FANTASILANDIA')
	print(10 *'==')
	print('1) Numero de visitantes que han accedido a una atraccion en un rango de fechas.')
	print('2) Numero de visitantes en un cierto rango de edades con un tipo de plan.')
	print('3) Media y desviacion estandar de la edad de los visitantes.')
	print('4) Ranking de los tres juegos mas visitados en un rango de fechas.')
	print('5) Ranking de los cinco visitantes que mas juegos han visitado en un rango de fechas.')
	print('6) Grafico de barras de visitantes por dia del mes por atraccion.')
	opcion =input('Seleccione un tipo de reporte [1-6, 0 para terminar]:\t')
	return opcion

while True:	
	opc = menu()
	if opc == 0:
		print('Saliendo...')
		break
	elif opc > 6:
		print('La opcion debe ser entre 1-6')
	elif opc < 0:
		print('La opcion no puede ser negativo')
	elif opc == 1:
		funciones.funcion1()
	elif opc == 2:
		funciones.funcion2()
	elif opc == 3:
		funciones.funcion3()
	elif opc == 4:
		funciones.funcion4()
	elif opc == 5:
		funciones.funcion5()		
	elif opc == 6:
		funciones.funcion6()	
		
		
#print(opc)