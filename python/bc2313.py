from math import pow
cVal = input().split(" ")

fVal = int(cVal[0])
sVal = int(cVal[1])
tVal = int(cVal[2])

vTri = (fVal + sVal > tVal) and (fVal + tVal > sVal) and (sVal + tVal > fVal)

if not vTri:
    print("Invalido")
else:
    fRes = "Valido-"
    sRes = "Retangulo: "
    tEq = (fVal == sVal) and (sVal == tVal)
    tIs = (fVal == sVal and tVal != fVal) or (fVal != sVal and tVal == sVal) or (fVal == tVal and tVal != sVal)

    if tEq: fRes += "Equilatero"
    elif tIs: fRes += "Isoceles"
    else: fRes += "Escaleno"

    if fVal > sVal and fVal > tVal:
        sRes += "S" if pow(fVal, 2) == pow(sVal, 2) + pow(tVal, 2) else "N"
    elif sVal > fVal and sVal > tVal:
        sRes += "S" if pow(sVal, 2) == pow(fVal, 2) + pow(tVal, 2) else "N"
    else:
        sRes += "S" if pow(tVal, 2) == pow(fVal, 2) + pow(sVal, 2) else "N"

    print(f"{fRes}\n{sRes}")
