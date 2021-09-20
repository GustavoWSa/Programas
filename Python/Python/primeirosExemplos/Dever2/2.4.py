num=[]
for aux in range(0,3,1):
        print("Digite o",aux+1, "numero")
        num.append(int(input()))
for i in range(0,2,1):
    for j in range(3):
        if (num[i]>num[j]):
            aux=num[i]
            num[i]=num[j]
            num[j]=aux
for i in range (0,3,1):
    print(num[i])




