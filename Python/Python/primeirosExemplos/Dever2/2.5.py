v = []
tamanho_do_vetor = 3
for i in range (tamanho_do_vetor):
  v.append (int(input("Digite um numero")))

for i in range(tamanho_do_vetor):
  for j in range(i,tamanho_do_vetor):
    if v[i] > v[j]:
      aux = v[i]
      v[i] = v[j]
      v[j] = aux
print("o maior é",v[tamanho_do_vetor-1])
print(v)