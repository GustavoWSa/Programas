n=int(input("Digite quantos alunos"))
for i in range(n):
    n1=11
    n=11
    while(n1<0 or n1>10 or n2<0 or n2>10):
        print(i+1,"aluno")
        n1 = int(input("Digite a primeira nota"))
        n2=int(input("Digite a segunda nota"))
        if(n1>10 or n1<0 or n2>10 or n<0):
            break
        media=(n1+n2)/2
        if(media>=7):
            print("Aprovado")
        elif(media<=5):
            print("Reprovado")
        else:
            print("Recuperacao")

