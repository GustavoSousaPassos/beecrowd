while True:
    sumT = 0

    pVal = input().split()

    fVal = int(pVal[0])
    sVal = int(pVal[1])

    if fVal <= 0 or sVal <= 0: break

    if sVal < fVal:
        aux = fVal
        fVal = sVal
        sVal = aux

    for c in range(fVal, sVal+1):
        print(f"{c}", end=" ")
        sumT += c
    print(f"Sum={sumT}")