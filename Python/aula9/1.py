def con():
    a=int(input("Digite quantos numeros"))
    conjunto={}
    conjunto=set()
    for i in range(a):
        b=int(input("Digite um numero"))
        if(b%2==0):
            conjunto.add(b)
    return(conjunto)


conjunto=con()
for i in conjunto:
    print (conjunto)
