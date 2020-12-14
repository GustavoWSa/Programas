Um=int(input("Digite quantos numeros tem a primeira lista"))
Dois=int(input("Digite quantos numeros tem a segunda lista"))
lista1=[0]*Um
lista2=[0]*Dois
for i in range(Um):
    lista1[i]=input("Digite o elemento da primeira lista")
for i in range(Dois):
    lista2[i] = input("Digite o elemento da segunda lista")
lista3=lista1+lista2
print(lista3)