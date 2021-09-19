valor = float(input())
cedulas = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00]
moedas = [1.00, 0.50, 0.25, 0.10, 0.05, 0.01]

print("NOTAS:")
for c in cedulas:
    quantidade_cedulas = valor // c
    print(f'{int(quantidade_cedulas)} nota(s) de R$ {c:.2f}')
    valor -= quantidade_cedulas * c
    
print("MOEDAS:")
for m in moedas:
    valor = round(valor, 2)
    quantidade_moedas = int(valor / m)
    print(f'{int(quantidade_moedas)} moeda(s) de R$ {m:.2f}')
    valor -= quantidade_moedas * m