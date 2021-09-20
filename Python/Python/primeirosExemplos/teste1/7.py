import math
n=int(input("Digite o numero que quer saber o fatorial"))
print(math.factorial(n))
fat=1
while(n>1):
    fat=fat*n
    n=n-1
print(fat)