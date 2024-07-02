while True:
    try:
        cLe = input()
        num = int(input())

        cVal = [int]*num

        cPos = input().split(" ")

        for c in range(0, num):
            cVal[c] = int(cPos[c])

        res = ""

        for d in range(0, num):
            pos = cVal[d]
            res[d] += cLe[pos]

        print(res)

    except EOFError:
        break
