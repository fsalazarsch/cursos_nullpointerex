#!/usr/bin/python
import os
import time
import datetime

def formato_fecha(fechaadm):
	stri = fechaadm.split("-")
	return stri[2]+"-"+stri[1]+"-"+stri[0]

def nom_juego(id):
	file="\\fantasilandia\\atracciones.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			if (str[0] == id):
				return str[1]
				break


	
def id_juego(nombre):
	file="\\fantasilandia\\atracciones.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			if (str[1] == nombre):
				return str[0]
				break

def leer_visitantes():
	resultado = []
	
	file="\\fantasilandia\\visitantes.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			resultado.append(int(str[2]))
			
	return resultado

				
def nro_visplan(nom_atraccion, edad1, edad2):
	resultado = 0
	file="\\fantasilandia\\visitantes.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			if((str[3] == nom_atraccion) and (int(str[2]) >= edad1) and (int(str[2]) <= edad2)):
				resultado += 1
	return resultado

				
def ids_vis():
	resultado = []
	file="\\fantasilandia\\visitantes.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			resultado.append(str[0])
	return resultado

	
def ids_juegos():
	resultado = []
	file="\\fantasilandia\\atracciones.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			resultado.append(str[0])
	return resultado

def datos_por_atraccion(id, fecha1, fecha2):
	cont = 0
	file="\\fantasilandia\\"+id+".txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	if(arch):
		while True:
			cad = arch.readline()
			if (not cad):
				break
			else:
				cad = cad[0:-1]
				str = cad.split(';')
				
				fecha = str[0]
				if ((fecha >= formato_fecha(fecha1)) and (fecha <= formato_fecha(fecha2))):
					cont += 1
	else:
		return []
	return [cont, fecha1, fecha2]	

def datos_por_atraccion2(id, fecha1, fecha2):
	cont = 0
	file="\\fantasilandia\\"+id+".txt"
	path= (__file__)
	if(os.path.isfile(path[0:-12]+file)):
		arch=open(path[0:-12]+file,"r");
		while True:
			cad = arch.readline()
			if (not cad):
				break
			else:
				cad = cad[0:-1]
				str = cad.split(';')		
				fecha = str[0]
				if ((fecha >= formato_fecha(fecha1)) and (fecha <= formato_fecha(fecha2))):
					cont += 1
	return [int(id), cont]	

def datos_por_atraccion3(idvis, fecha1, fecha2):
	cont = 0
	
	ids = ids_juegos()
	repos = []
	#print(ids)
	for i in range(len(ids)):	
		file="\\fantasilandia\\"+ids[i]+".txt"
		path= (__file__)
		if(os.path.isfile(path[0:-12]+file)):
			arch=open(path[0:-12]+file,"r");
			while True:
				cad = arch.readline()
				if (not cad):
					break
				else:
					cad = cad[0:-1]
					str = cad.split(';')		
					fecha = str[0]
					if ((fecha >= formato_fecha(fecha1)) and (fecha <= formato_fecha(fecha2)) and (str[2] == idvis)):
						cont += 1
	return [int(idvis), cont]	

def visitas_porjuego(idjuego, idvisita, fecha1, fecha2):
	cont =0;
	file="\\fantasilandia\\"+idjuego+".txt"
	path= (__file__)
	if(os.path.isfile(path[0:-12]+file)):
		arch=open(path[0:-12]+file,"r");
		while True:
			cad = arch.readline()
			if (not cad):
				break
			else:
				cad = cad[0:-1]
				str = cad.split(';')		
				fecha = str[0]
				if ((fecha >= formato_fecha(fecha1)) and (fecha <= formato_fecha(fecha2)) and (int(str[2]) == idvisita)):
					cont += 1
	return cont
		
	
def vis_atraccion(idvis, fecha1, fecha2):
	ids = ids_juegos()
	repos = []
	#print(ids)
	for i in range(len(ids)):
		repos.append([ids[i], visitas_porjuego(ids[i], idvis, fecha1, fecha2)])
	return repos;

def nom_vis(id):

	file="\\fantasilandia\\visitantes.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			if (int(str[0]) == id):
				return str[1]

def nom_plan(id):

	file="\\fantasilandia\\visitantes.txt"
	path= (__file__)
	arch=open(path[0:-12]+file,"r");
	while True:
		cad = arch.readline()
		if (not cad):
			break
		else:
			cad = cad[0:-1]
			str = cad.split(';')
			if (int(str[0]) == id):
				return str[3]

def visitas_porjuegodia(idjuego, fecha1):
	cont =0
	file="\\fantasilandia\\"+idjuego+".txt"
	path= (__file__)
	if(os.path.isfile(path[0:-12]+file)):
		arch=open(path[0:-12]+file,"r");
		while True:
			cad = arch.readline()
			if (not cad):
				break
			else:
				cad = cad[0:-1]
				stri = cad.split(';')		
				fecha = stri[0]				
				if (str(fecha) == str(fecha1)):
					cont += 1
			
	return cont;

def visitas_por_mes(idjuego, mes, anio):
	tot =[]
	for i in range(1,32):
		if(mes < 10):
			mes = '0'+str(mes)
		if(i < 10):
			i = '0'+str(i)
		fecha = (str(anio)+'-'+str(mes)+'-'+str(i))
		tot.append(visitas_porjuegodia(idjuego, str(fecha)))
	return tot