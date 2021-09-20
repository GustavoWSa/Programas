def media(med):
    if(med>=7):
        print("Aprovado")
    elif(med<=5):
        print("Reprovado")
    else:
        print("Recuperacao")


a=0
total=0
a=int(input("Digite quantas notas"))
for i in range(0,a):
    i=int(input("Digite a nota"))
    total=total+i
media(total)