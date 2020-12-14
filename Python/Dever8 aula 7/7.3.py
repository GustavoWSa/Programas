def lista():
    n=int(input("Digite quantos nomes quer inserir"))
    vet=[0]*n
    i=0
    for i in range(n):
        vet[i]=input("Digite um nome")
    vet.sort()
    return vet
vet=lista()
for i in vet:
    print(i)