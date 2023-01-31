countP = 0
countI = 0
countPo = 0
countN = 0

for i in range(0, 5):
    val = int(input())

    if val % 2 == 0: countP += 1
    else: countI += 1

    if val > 0: countPo += 1
    elif val < 0: countN += 1

print(f"{countP} valor(es) par(es)\n{countI} valor(es) impar(es)\n{countP} valor(es) positivo(s)\n{countN} valor(es) negativo(s)")