while True:
    try:
        cLe = input()
        num = int(input())

        cVal = [int]*num

        cPos = input().split(" ")

        for c in range(0, num):
            cVal[c] = int(cPos[c])

    except EOFError:
        break
