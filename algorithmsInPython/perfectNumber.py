entry = int(input())
number = 0
for i in range(entry):
  sum = 0
  number = int(input())
  for j in range(1, number):
    if number % j == 0:
      sum += j
  if number == sum:
    print(f"{number} eh perfeito")
  else:
    print(f"{number} nao eh perfeito")