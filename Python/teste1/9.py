total=0
for i in range(1,101):
    if(i%4==0):
        print(i)
        total=total+1

for i in range(1,101):
    if(i%4==0):
        print(i, end=" ")
print(" ")
print(total,"multiplos de 4")