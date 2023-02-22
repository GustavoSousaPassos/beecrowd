fVal = int(input())
sVal = int(input())
if fVal > sVal:
    aux = sVal
    sVal = fVal
    fVal = aux

for c in range(fVal+1, sVal):
    if c % 5 == 2 or c % 5 == 3: print(c)