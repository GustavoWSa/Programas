total3=0
total5=0
for i in range(1,101):
    if(i%3==0):
        total3=total3+1
        print(i,"É divisor de 3")
    if(i%5==0):
        total5 = total5 + 1
        print(i,"É divisor de 5")
print("O total de divisores por 3 é",total3,"e de 5 é ",total5)