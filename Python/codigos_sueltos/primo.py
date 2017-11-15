
def par_impar(numero):
	if numero%2 == 0:
		return 'P'
	else:
		return 'I'

def esprimo(numero):
	if numero == 1:
		return False
	contador = 1
	while contador != numero:
		if numero % contador == 0 and contador != 1:
			return False
		contador += 1
	return True


def nprimo(numero):
	contador = 1
	contador_primos = 0
	while contador_primos != numero:
		if esprimo(contador) == True:
			contador_primos += 1
			
		contador += 1
		#test
		#print str(contador) +"->"+str(esprimo(contador))
		
	return contador-1

numero = int (raw_input("Ingrese numero:" ))
print par_impar(numero)
print "El "+str(numero)+" primo es: " +str(nprimo(numero)) 
lista = []
lista.append(numero)
lista.append(par_impar(numero))
lista.append(nprimo(numero))
print lista
