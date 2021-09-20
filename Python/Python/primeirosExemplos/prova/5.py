par=0
impar=0
mult=0
print("Pares:")
for i in range(0,251):
    if(i%2==0):
        print(i,end=" ")
        par=par+1
print(" ")
print("Numero de pares e igual a",par)

print("Impares:")
for i in range(0,250):
    if(i%2!=0):
        print(i, end=" ")
        impar=impar+1
print(" ")
print("Numero de impares e igual a",impar)
print("Multiplos de 5:")
for i in range(0,250):
    if(i%5==0):
        print(i, end=" ")
        mult=mult+1
print(" ")
print("Numeros multiplos de 5 é igual a",mult)

