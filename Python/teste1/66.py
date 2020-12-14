n=int(input("Digite quantas notas"))
media=0.0
total=0.0
for i in range(n):
    nota=float(input("Digite a nota"))
    while(nota>10 or nota<0):
        nota = float(input("Digite a nota"))
    total=total+nota
print(total/n)
if(total>=7):
            print("Aprovado")
elif(total<=5):
            print("Reprovado")
else:
            print("Recuperacao")