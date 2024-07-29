while True:
    count = 0

    try:
        fLi = input().split(" ")

        nCa = int(fLi[0])
        ind = int(fLi[1])

        for c in range(0, nCa):
            sLi = input().split(" ")

            fVal = int(sLi[0])
            sVal = int(sLi[1])

            if fVal == ind and sVal == 0: count += 1

        print(count)

    except EOFError:
        break