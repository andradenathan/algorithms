casos = int(input())
numeros = ''
for i in range(casos):
  resposta = ''
  k = 0
  j = 1
  numeros = list(input())
  numeros.sort()
  while '0' in numeros:
    id = numeros.index('0')
    del numeros[id]
    k += 1
  
  while j <= k:
    numeros.insert(j, '0')
    j += 1

  resposta = resposta.join(numeros)
  print(resposta)