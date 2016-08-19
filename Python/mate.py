def menu():
	opcm = 0
	while(opcm != 5):	
		op2 = 'y'
		op4 = 'y'

		print "1) Elegir 'p','q' y 'e'"
		print "2) Sacar Modulo"
		print "3) Decodificar"
		print "4) Sacar decodificado Modulo"
		opcion = (int) (raw_input("SELECCIONE UNA OPCION:    "))	
		
		if(opcion == 1):
			rsa = RSA()
		if(opcion == 2):
			while(op2 == 'y'):
				print sacar_modulo(rsa[2],rsa[1])
				op2 = raw_input("Desea calcular modulo nuevamente?(y/n)")
		if(opcion == 3):
			decodificar(rsa[2], rsa[0], rsa[1])
		if(opcion == 4):
			while(op4 == 'y'):
				print sacar_modulo(decodificar(rsa[2], rsa[0], rsa[1]), rsa[1])
				op4 = raw_input("Desea calcular modulo nuevamente?(y/n)")

def mcd(a):
	if(len(a) == 1):
		return a[0][0], a[1][0]
	else:		
		d = []
		i=0
		d = mult_matrices(a[i],a[i+1])
		i=2
		while i != len(a):	
			aux = d	
			d = mult_matrices(aux,a[i])
			i+=1
		return d[0][0], d[1][0]
	
def llenar_matrices(a):
    matrices = []
    i=0
    while i != len(a):
        matrices +=[[[0,1],[1, -a[i]]]]
        i+=1
    return matrices    

def mult_matrices(a,b):
    c = [[0,0],[0,0]]

    c[0][0] = a[0][0]*b[0][0] + a[1][0]*b[0][1] 
    c[1][0] = a[0][0]*b[1][0] + a[1][0]*b[1][1]
    c[0][1] = a[0][1]*b[0][0] + a[1][1]*b[0][1]
    c[1][1] = a[0][1]*b[1][0] + a[1][1]*b[1][1]
    return c

def RSA():
	print "Primero debemos elegir 2 numeros ('p' y 'q'):"
	p = (int) (raw_input("Primer numero:    "))
	q = (int) (raw_input("Segundo numero:   "))
	decodificador = (p-1)*(q-1)
	print chr(216)+"("+str(p*q)+")="+str(decodificador)
	e = (int) (raw_input("Ahora debe escribir 'e'--> primo relativo de "+str(decodificador)+":      "))
	return decodificador, (p*q),e	
	 
def sacar_modulo(exp,modulo):
	base = (int) (raw_input("Escriba la base:    "))
	cont = 0
	producto = 1
	while(cont < exp):
		producto = ((producto*base)%modulo)
		cont +=1
	return producto
	

def decodificar(e, phi,mod):
	i = e
	j = phi
	
	resto =[]
	x = [[0,0],[0,0]]
	aux = 0

	while((i%j) != 0):
    		resto =[i/j] + resto
    		aux = i
    		i = j
    		j = aux%j

	resto =[i/j] + resto
	x = llenar_matrices(resto)
	
	if((1-(phi* mcd(x)[1]))/e == mcd(x)[0]):
		if(mcd(x)[0] < 0):
			return (mcd(x)[0]+phi)
	else:
		if(mcd(x)[1] < 0):
			return (mcd(x)[1]+phi)


menu()
