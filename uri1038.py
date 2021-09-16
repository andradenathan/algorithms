codigo = input().split()
preco = 0
item = int(codigo[0])
quantidade = int(codigo[1])

if item == 1:
  preco += 4 * quantidade
elif item == 2:
  preco += 4.5 * quantidade
elif item == 3:
  preco += 5 * quantidade
elif item == 4:
  preco += 2 * quantidade
elif item == 5:
  preco += 1.5 * quantidade

print(f"Total: R$ {preco:.2f}")