casos = int(input())
for _ in range(casos):
  n, m = input().split()
  resposta = int(n) ** int(m)
  tamanho = len(str(resposta))
  print(tamanho)