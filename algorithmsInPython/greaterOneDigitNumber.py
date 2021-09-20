N = -1
M = -1

while True:
  N, M = input().split()
  if int(N) == 0 and int(M) == 0:
    break

  while len(N) > 1:
    somatorioN = 0
    for i in N:
      somatorioN += int(i)
    N = str(somatorioN)
  
  while len(M) > 1:
    somatorioM = 0
    for i in M:
      somatorioM += int(i)
    M = str(somatorioM)
  
  if int(N) == int(M):
    print(0)
  elif int(N) > int(M):
    print(1)
  else:
    print(2)