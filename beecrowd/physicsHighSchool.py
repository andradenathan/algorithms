while True:
  i = 0
  try:
    entrada = input().split()
    v = int(entrada[int(i)])
    t = int(entrada[int(i+1)])
    resultado = 2 * (v * t)
    print(resultado)
  except EOFError:
    break