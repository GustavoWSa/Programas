def perfil():
    nome=input("Digite seu nome")
    idade=int(input("Digite sua idade"))
    print("Voce nasceu em",2020-idade)
    if(idade>=17):
        print("Logo é maior de idade")
    else:
        print("Logo é menor de idade")


perfil()