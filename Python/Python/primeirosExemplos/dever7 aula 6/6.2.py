def pedido():
    a = 0
    total = 0
    a = int(input("Digite quantos numeros"))
    for i in range(0, a):
        i = int(input("Digite o numero"))
        total = total + i
    total=total/a
    return total

total=pedido()
print(total)