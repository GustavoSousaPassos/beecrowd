while True:
    try:
        fSo = 0
        sSo = 0

        nCa = int(input())

        for c in range(0, nCa):
            cVal = input().split(" ")

            fVal = int(cVal[0])
            sVal = int(cVal[1])

            fSo += fVal * sVal
            sSo += sVal

        res = float(fSo / (sSo*100))

        print(f"{res:.4f}")
    except EOFError:
        break
