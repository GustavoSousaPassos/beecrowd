nCa = int(input())

for c in range(0, nCa):
    line = input().split(" ")

    fP = line[0]
    fCh = line[1]
    sP = line[2]
    sCh = line[3]

    cVal = input().split(" ")

    fPe = int(cVal[0])
    sPe = int(cVal[1])

    res = "PAR" if ((fPe + sPe) % 2) == 0 else "IMPAR"

    print(f"{fP}" if res == fCh else f"{sP}")
