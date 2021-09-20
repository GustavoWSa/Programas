par=0
impar=0
for i in range(1,11,1):
    numi=int(input("Digite um numero"))
    if(numi%2==0):
        par=par+1
    else:
        impar=impar+1
print("O numero de pares é {0} e de impares é {1}" .format(par,impar))