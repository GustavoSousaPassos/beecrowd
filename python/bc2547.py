while True:
    count = 0
    try:
        cVal = input().split(" ")

        nPe = int(cVal[0])
        aMi = int(cVal[1])
        aMax = int(cVal[2])

        vec = [int] * nPe

        for c in range(0, nPe):
            vec[c] = int(input())

        for c in range(0, nPe):
            val = vec[c]
            if val >= aMi and val <= aMax:
                count += 1

        print(count)

    except EOFError:
        break
