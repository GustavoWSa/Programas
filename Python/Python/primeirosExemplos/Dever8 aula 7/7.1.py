a=int(input("Digite quantos numeros tem a lista"))
vet=[]
cont=0
for i in range(a):
    b=int(input("Digite o elemento da lista"))
    vet.append(b)
num=int(input("Digite o numero que gostaria de verificar"))
if num in vet:
    while(num in vet):
        vet.remove(num)
        cont+=1
    for i in range(0,a-cont):
        print(vet[i])
else:
    print("Nao esta presente")