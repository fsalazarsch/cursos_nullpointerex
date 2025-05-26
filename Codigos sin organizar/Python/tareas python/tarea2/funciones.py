#!/usr/bin/python

import leer_txt
import time
import math
from Tkinter import *
import Tkinter as tk

def promedio(arr):
	suma = 0
	for i in range (len(arr)):
		suma += int(arr[i])
	return suma/len(arr)
	
def desv_estandar(arr):
	suma = 0
	for i in range (len(arr)):
		suma += ((int(arr[i]) - promedio(arr)) ** 2)
	suma = suma/(len(arr)-1)
	return(math.sqrt(suma))
	
def mayor(d1, d2):
    d1 = time.strptime(d1, "%d-%m-%Y")
    d2 = time.strptime(d2, "%d-%m-%Y")
    if d1 > d2:
		return True
    if d1 < d2:
		return False

	 
def  funcion1():	
	print("[Reporte Tipo 1]")
	atraccion = raw_input("Ingrese el nombre de una atraccion:")
	idatraccion = (leer_txt.id_juego(atraccion))
	
	fecha1 = raw_input("Ingrese fecha de inicio [DD-MM-AAAA]:")
	fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")
	while(mayor(fecha1, fecha2)):
		print("Error ingrese una fecha de termino mayor")
		fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")
	
	rep1 = leer_txt.datos_por_atraccion(idatraccion, fecha1, fecha2)
	print("Resultado")
	print("Atraccion: "+atraccion)
	print("Fecha de Inicio: "+str(rep1[1]))
	print("Fecha de Termino: "+str(rep1[2]))
	print("Numero de visitas: "+str(rep1[0]))
	raw_input("Presione 'enter' para continuar.")
	print("")

def funcion2():
	print("[Reporte Tipo 2]")
	atraccion = raw_input("Ingrese un tipo de plan:")
	
	edad1 = input("Ingrese edad inicial:")
	edad2 = input("Ingrese edad final:")
	while(edad1 > edad2):
		print("Error, la edad final es menor que la edad inicial, vuelva a ingresarla")
		edad2 = input("Ingrese edad final:")
	
	rep1 = leer_txt.nro_visplan(atraccion, edad1, edad2)
	print("Resultado")
	print("Tipo de plan: "+atraccion)
	print("Numero de visitantes: "+str(rep1))
	raw_input("Presione 'enter' para continuar.")
	print("")

def funcion3():
	print("[Reporte Tipo 3]")
	
	rep = leer_txt.leer_visitantes()
	print("Resultado")
	print("Media: "+str(promedio(rep)))
	print("Desv_estandar: "+str(desv_estandar(rep)))
	raw_input("Presione 'enter' para continuar.")
	print("")
	
	
def funcion4():
	print("[Reporte Tipo 4]")
	fecha1 = raw_input("Ingrese fecha de inicio [DD-MM-AAAA]:")
	fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")
	while(mayor(fecha1, fecha2)):
		print("Error ingrese una fecha de termino mayor")
		fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")

	ids = leer_txt.ids_juegos()
	repos = []
	#print(ids)
	for i in range(len(ids)):
		repos.append(leer_txt.datos_por_atraccion2(ids[i], fecha1, fecha2))
			
	repos = sorted(repos, key= lambda x: x[1])
	
	print("Resultado")
	print("1;"+leer_txt.nom_juego(str(repos[-1][0]))+";"+str(repos[-1][1]))
	print("2;"+leer_txt.nom_juego(str(repos[-2][0]))+";"+str(repos[-2][1]))
	print("3;"+leer_txt.nom_juego(str(repos[-3][0]))+";"+str(repos[-3][1]))
	raw_input("Presione 'enter' para continuar.")
	print("")
	
def funcion5():
	print("[Reporte Tipo 5]")
	fecha1 = raw_input("Ingrese fecha de inicio [DD-MM-AAAA]:")
	fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")
	while(mayor(fecha1, fecha2)):
		print("Error ingrese una fecha de termino mayor")
		fecha2 = raw_input("Ingrese fecha de termino [DD-MM-AAAA]:")

	idsvis = leer_txt.ids_vis()
	
	repos = []
	numero = []
	#print(ids)
	for i in range(len(idsvis)):
		repos.append(leer_txt.datos_por_atraccion3(idsvis[i], fecha1, fecha2))
			
	repos = sorted(repos, key= lambda x: x[1])
	
	numero1 = leer_txt.vis_atraccion(repos[-1][0], fecha1, fecha2)
	numero1 = sorted(numero1, key= lambda x: x[1])

	numero2 = leer_txt.vis_atraccion(repos[-2][0], fecha1, fecha2)
	numero2 = sorted(numero2, key= lambda x: x[1])

	numero3 = leer_txt.vis_atraccion(repos[-3][0], fecha1, fecha2)
	numero3 = sorted(numero3, key= lambda x: x[1])

	numero4 = leer_txt.vis_atraccion(repos[-4][0], fecha1, fecha2)
	numero4 = sorted(numero4, key= lambda x: x[1])

	numero5 = leer_txt.vis_atraccion(repos[-5][0], fecha1, fecha2)
	numero5 = sorted(numero5, key= lambda x: x[1])
	#print(numero[-1][0])
	
	print("Resultado")
	print("1;"+str(leer_txt.nom_vis(repos[-1][0]))+";"+str(numero1[-1][1])+";"+str(leer_txt.nom_juego(numero1[-1][0]))+";"+str(leer_txt.nom_plan(repos[-1][0])))
	print("2;"+str(leer_txt.nom_vis(repos[-2][0]))+";"+str(numero2[-1][1])+";"+str(leer_txt.nom_juego(numero2[-1][0]))+";"+str(leer_txt.nom_plan(repos[-2][0])))
	print("3;"+str(leer_txt.nom_vis(repos[-3][0]))+";"+str(numero3[-1][1])+";"+str(leer_txt.nom_juego(numero3[-1][0]))+";"+str(leer_txt.nom_plan(repos[-3][0])))
	print("4;"+str(leer_txt.nom_vis(repos[-4][0]))+";"+str(numero4[-1][1])+";"+str(leer_txt.nom_juego(numero4[-1][0]))+";"+str(leer_txt.nom_plan(repos[-4][0])))
	print("5;"+str(leer_txt.nom_vis(repos[-5][0]))+";"+str(numero5[-1][1])+";"+str(leer_txt.nom_juego(numero5[-1][0]))+";"+str(leer_txt.nom_plan(repos[-5][0])))
	raw_input("Presione 'enter' para continuar.")
	print("")
	
def funcion6():
	print("[Reporte Tipo 6]")
	atraccion = raw_input("Ingrese el nombre de una atraccion:")
	idatraccion = (leer_txt.id_juego(atraccion))
	mes_esp = ['Enero','Febrero','Marzo','Abril','Mayo','Junio','Julio','Agosto','Septiembre','Octubre','Noviembre','Diciembre']
	mes = input("Ingrese mes:")
	anio = input("Ingrese ano:")
	tot = leer_txt.visitas_por_mes(idatraccion, mes, anio)
	print(tot)
	
	ventana = tk.Tk()
	ventana.title("Visitantes del mes "+str(mes_esp[mes-1])+" del "+str(anio)+" en "+atraccion)
	frame = tk.Frame()
	ventana.geometry("%dx%d+%d+%d" % (500, 300, 200, 200))
	canvas = Canvas()
	canvas.create_rectangle(30, 30, 30, 400, outline="#000000", fill="#000000")
	canvas.create_rectangle(20, 250, 450, 250, outline="#000000", fill="#000000")

	#canvas.create_rectangle(30, 10, 120, 80, outline="#fb0", fill="#fb0")
	x = 35
	y = 250
	grosor = 5
	
	for i in range(len(tot)):
		canvas.create_rectangle(x, y-1, x+grosor, y-(5*tot[i])-1, outline="#f50", fill="#f50")
		x = x+grosor+7
	
		
	label = tk.Label(canvas, text="5")
	label.place(x=80, y=255)
	label = tk.Label(canvas, text="10")
	label.place(x=80+60, y=255)
	label = tk.Label(canvas, text="15")
	label.place(x=80+120, y=255)
	label = tk.Label(canvas, text="20")
	label.place(x=80+180, y=255)
	label = tk.Label(canvas, text="25")
	label.place(x=80+240, y=255)
	label = tk.Label(canvas, text="30")
	label.place(x=80+300, y=255)
	label = tk.Label(canvas, text="35")
	label.place(x=80+360, y=255)
		

	label = tk.Label(canvas, text="5")
	label.place(x=5, y=240-25)
	label = tk.Label(canvas, text="10")
	label.place(x=5, y=240-50)
	label = tk.Label(canvas, text="15")
	label.place(x=5, y=240-75)
	label = tk.Label(canvas, text="20")
	label.place(x=5, y=240-100)
	label = tk.Label(canvas, text="25")
	label.place(x=5, y=240-125)
	label = tk.Label(canvas, text="30")
	label.place(x=5, y=240-150)
	label = tk.Label(canvas, text="35")
	label.place(x=5, y=240-175)
	label = tk.Label(canvas, text="40")
	label.place(x=5, y=240-200)
		
	#canvas.create_rectangle(35, 250, 40, 245, outline="#f50", fill="#f50")
	
	canvas.pack(fill=BOTH, expand=1)
	ventana.mainloop()