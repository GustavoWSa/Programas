n=int(input("Digite quantas compras quer somar"))
total=0
compra=0
a=0
b=0
for i in range(n):
    compra=int(input("Digite o valor a somar"))
    desconto = int(input("Digite quanto de desconto"))
    a=compra*(desconto/100)
    b=compra-a
    total=total+b
print(total)