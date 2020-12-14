n=int(input("Digite quantos numeros"))
con={}
con=set()
lista=[]
for i in range(n):
    a=int(input("Digite um numero"))
    if (a%2==0):
        con.add(a)
    else:
        lista.append(a)