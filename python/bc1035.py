cVal = input().split(" ")

fVal = int(cVal[0])
sVal = int(cVal[1])
tVal = int(cVal[2])
foVal = int(cVal[3])

fVe = sVal > tVal and foVal > fVal
sVe = tVal + foVal > fVal + sVal
tVe = (tVal > 0 and foVal > 0) == (fVal % 2 == 0)

if fVe == True and sVe == True and tVe == True:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")