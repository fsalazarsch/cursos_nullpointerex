def comp_cons(palabra):
    vocales = 'bcdfghjklmnpqrstvwxyz'
    flag = False
    for elem in vocales:
        if(palabra[0] == elem):
            flag = True
    return flag

entrada = raw_input()
entrada = entrada.split()
#print entrada
i = 0
while i < len(entrada):
    if(len(entrada[i]) < 2):
        del entrada[i]
    elif(comp_cons(entrada[i])):
        del entrada[i]
    else:
        i += 1

i=0
j=i+1
while i < len(entrada):
    if(entrada[i] == entrada[j]):
        del entrada[i]
    else:
        i += 1
        j = i+1

print entrada
