cont=0
total=1
for i in range(10,1,-1):
    while(i>1):
        total=total*i
        i=i-1
        cont=cont+1
    print("Fatorial de", cont+1,"é igual a",total)
    cont=0
    total=1
