N = input()
lista_leds = []

dict = {
    '1': 2,
    '2': 5, 
    '3': 5, 
    '4': 4, 
    '5': 5, 
    '6': 6, 
    '7': 3, 
    '8': 7, 
    '9': 6,
    '0': 6
}

for i in range(0, int(N)):
    N = input().strip('')
    quantidade_leds = 0
    for j in N:
        quantidade_leds += dict.get(j)
    lista_leds.append(quantidade_leds)

for k in lista_leds:
    print(f'{k} leds')