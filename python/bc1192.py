nCa = int(input())

for c in range(0, nCa):
    cVal = input()

    fVal = int(cVal[0])
    le = cVal[1]
    sVal = int(cVal[2])

    if fVal == sVal: res = fVal * sVal
    else: res = sVal - fVal if le.isupper() else fVal + sVal

    print(res)