while True:
    res = ""
    cVal = input().split(" ")

    fVal = int(cVal[0])
    sVal = int(cVal[1])

    if fVal == 0 and sVal == 0: break
    else:
        so = str(fVal+sVal)

        for c in range(0, len(so)):
            if so[c] != '0': res += so[c]

        print(res)