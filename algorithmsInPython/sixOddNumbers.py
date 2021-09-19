entrada: int = int(input())

aux: int = entrada
resposta: int = 0

while resposta != 6:
  if aux % 2 != 0:
    print(aux)
    resposta += 1
  aux += 1