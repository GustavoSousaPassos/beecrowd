tCo = 0
count = int(input())

for i in range(count):
    cVal = input().split(" ")

    nLa = int(cVal[0])
    nCo = int(cVal[1])

    if nCo < nLa: tCo += nCo

print(tCo)