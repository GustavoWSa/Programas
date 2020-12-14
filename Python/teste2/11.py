def fat(a):
    multi=1
    while(a!=1):
        multi *= a
        a -=1
    print(multi)
vet=[]
for i in range(3):
    a=int(input("Digite um numero"))
    vet.append(a)
    fat(a)