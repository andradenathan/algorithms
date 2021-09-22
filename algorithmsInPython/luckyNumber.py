casos = int(input())
numeros = ''
for i in range(casos):
  resposta = ''
  k = 0
  n = 1
  numeros = input().split()
  for j in numeros:
    numeros = sorted(j)
    
  while '0' in numeros:
    numeros.remove('0')
    k += 1

  while n <= k:
    numeros.insert(n, '0')
    n += 1

  resposta = resposta.join(numeros)
  print(resposta)