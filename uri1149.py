valores = input().split()
A = int(valores[0])
i = 0
resposta = 0

while i < len(valores):
    if (int(valores[i+1]) > 0):
        N = valores[i+1]
    
    for j in valores:
        resposta += A + i
        i += 1
        
print(resposta)