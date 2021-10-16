entry = int(input())
for i in range(entry):
  text = input()
  for j in text:
    if 65 <= ord(j) <= 90 or 97 <= ord(j) <= 122:  
      aux = ord(j) + 3
      encryptedText += chr(aux)
    else:
      encryptedText += j

  encryptedText = list(encryptedText[::-1])
  for j in range((len(encryptedText))//2, len(encryptedText)):
    aux = ord(encryptedText[j]) - 1
    encryptedText[j] = chr(aux)

  encryptedText = "".join(encryptedText)
  print(encryptedText)
