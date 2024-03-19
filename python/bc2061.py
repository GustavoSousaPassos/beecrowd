cVal = input().split(" ")

nAb = int(cVal[0])
aP = int(cVal[1])

for c in range(0, aP):
    aIn = input()

    nAb -= 1

    if aIn == "fechou": nAb += 2

print(nAb)
