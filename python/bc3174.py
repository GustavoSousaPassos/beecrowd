from math import ceil
nPre = 0
nCa = int(input())

for c in range(0, nCa):
    cVal = input().split(" ")

    nSe = cVal[1]
    qtdH = int(cVal[2])

    if nSe == "bonecos":
        nPre += int(qtdH / 8)
    elif nSe == "arquitetos": nPre += int(ceil(qtdH / 4))
    elif nSe == "musicos": nPre += int(qtdH / 6)
    elif nSe == "desenhistas": nPre += int(qtdH / 12)

print(nPre)
