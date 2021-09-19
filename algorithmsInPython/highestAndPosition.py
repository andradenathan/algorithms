lista_numeros = []
for i in range(100):
    numero = int(input())
    lista_numeros.append(numero)

maior = max(lista_numeros)
posicao = lista_numeros.index(maior)

print(f'{maior}\n{posicao + 1}')
