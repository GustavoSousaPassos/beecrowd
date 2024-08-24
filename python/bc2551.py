while True:
    try:

        nCa = int(input())
        vMe = 0.0

        for c in range(0, nCa):
            cVal = input().split(" ")

            tMi = int(cVal[0])
            dis = int(cVal[1])

            vel = float((dis*1000) / (tMi*60))

            if vel > vMe:
                print(c+1)
                vMe = vel
    except EOFError:
        break