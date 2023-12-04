cVal = [4, 7, 10, 12, 15, 20, 22, 25, 30, 40, 52, 55, 60, 70, 100, 102, 105, 110, 120, 150, 200]

while True:
    res = "impossble"
    vec = input().split(" ")

    fVal = int(vec[0])
    sVal = int(vec[1])

    if fVal == 0 and sVal == 0: break
    else:
        trc = abs(fVal - sVal)
        for c in range(0, len(cVal)):
            if cVal[c] == trc:
                res = "possible"
                break

        print(res)