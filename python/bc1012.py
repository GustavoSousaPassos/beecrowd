from math import pow

pi = 3.14159

cVal = input().split(' ')

fVal = float(cVal[0])
sVal = float(cVal[1])
tVal = float(cVal[2])

aTri = (fVal * tVal) / 2
aCi = pi * pow(tVal,2)
aTra = ((fVal + sVal) * tVal) / 2
aQ = pow(sVal,2)
aR = fVal*sVal

print(f"TRIANGULO: {aTri:.3f}\nCIRCULO: {aCi:.3f}\nTRAPEZIO: {aTra:.3f}\nQUADRADO: {aQ:.3f}\nRETANGULO: {aR:.3f}")
