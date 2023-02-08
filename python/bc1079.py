qtdT = int(input())

for c in range(0, qtdT):
    cVal = input().split(" ")

    fVal = float(cVal[0])
    sVal = float(cVal[1])
    tVal = float(cVal[2])

    sVa = (fVal*2 + sVal*3 + tVal*5) / 10.0

    print(f"{sVa:.1f}")