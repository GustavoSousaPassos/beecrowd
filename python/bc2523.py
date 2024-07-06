while True:
    try:
        cLe = input().strip()
        num = int(input().strip())

        cVal = [0]*num

        cPos = input().strip().split(" ")

        for c in range(0, num):
            cVal[c] = int(cPos[c])-1

        res = ""

        for d in range(0, num):
            pos = cVal[d]
            res += cLe[pos]

        print(res)

    except EOFError:
        break
