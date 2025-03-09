res = 0
qRe = [int] * 3
sPa = [int] * 3

fLi = input().split(" ")
sLi = input().split(" ")

for c in range(0, 3):
    qRe[c] = int(fLi[c])
    sPa[c] = int(sLi[c])

for i in range(0, 3):
    if qRe[i] < sPa[i]: res += sPa[i] - qRe[i]

print(res)
