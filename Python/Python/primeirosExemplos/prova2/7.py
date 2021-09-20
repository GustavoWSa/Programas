def prova():
    lista = []
    lista2= []
    a=0
    total=0
    total=0
    for i in range(10):
        print("Digite o ",i+1," elemento")
        a=int(input())
        lista.append(a)
        total += a*a*a
        lista2.append(a*a*a)
    lista2.sort()
    for i in range(10):
        print(lista2[i])
    print("Maior elemento: ",max(lista2))
    print("Menor elemento: ", min(lista2))
    print(total)
prova()