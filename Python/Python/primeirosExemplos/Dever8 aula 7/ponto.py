a=int(input("Digite quantos numeros tem a lista"))
vet=[0]*a
cont=0
for i in range(a):
    vet[i]=input("Digite um numero")
num=int(input("Digite o numero que gostaria de verificar"))
if num in vet:
    while(num in vet):
        vet.remove(num)
        cont+=1
    for i in range(0,a-cont):
        print(vet[i])
else:
    print("Nao esta presente")