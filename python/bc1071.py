fVal = int(input())
sVal = int(input())
soma = 0

if fVal > sVal:
    aux = fVal
    fVal = sVal
    sVal = aux

for i in range(fVal+1, sVal):
    if i % 2 != 0:
        soma += i

print(soma)