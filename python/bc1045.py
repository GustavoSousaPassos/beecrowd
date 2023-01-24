from math import pow

cVal = input().split(" ")

valA = float(cVal[0])
valB = float(cVal[1])
valC = float(cVal[2])

while True:
    if valB > valA:
        aux = valB
        valB = valA
        valA = aux
    elif valB < valC:
        aux = valB
        valB = valC
        valC = aux
    else: break

if valA >= valB + valC: print("NAO FORMA TRIANGULO")
else:
    fRes = pow(valA, 2)
    sRes = pow(valB, 2) + pow(valC, 2)

    if fRes == sRes: print("TRIANGULO RETANGULO")
    elif fRes > sRes: print("TRIANGULO OBTUSANGULO")
    elif fRes < sRes: print("TRIANGULO ACUTANGULO")

    fVer = valA == valB and valB == valC
    sVer = (valA == valB and valB != valC) or (valA != valB and valB == valC)

    if fVer == True: print("TRIANGULO EQUILATERO")
    elif sVer == True: print("TRIANGULO ISOSCELES")
