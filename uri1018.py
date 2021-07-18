valor = int(input())
cedulas = [100, 50, 20, 10, 5, 2, 1]

print(valor)
for c in cedulas:
    quantidade_cedulas = valor // c
    print(f'{quantidade_cedulas} nota(s) de R$ {c},00')
    valor -= quantidade_cedulas * c