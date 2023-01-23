cVal = input().split(" ")

valA = float(cVal[0])
valB = float(cVal[1])
valC = float(cVal[2])

fVer = valA + valB > valC
sVer = valB + valC > valA
tVer = valC + valA > valB

if fVer == sVer and sVer == tVer:
    per = valA + valB + valC
    print(f"Perimetro = {per:.1f}")
else:
    area = ((valA + valB) * valC) / 2
    print(f"Area = {area:.1f}")