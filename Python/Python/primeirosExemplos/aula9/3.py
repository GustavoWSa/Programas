lis1=[1,2,3,4,5]
lis2=["a","b","c","d","e"]
lis3=[20,21,22,23,24]
lis4=[]
for i in range(len(lis2)):
    lis4.append(lis1[i])
    lis4.append(lis2[i])
    lis4.append(lis3[i])
print(lis4)