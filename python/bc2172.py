while True:
    cVal = input().split(" ")

    valX = int(cVal[0])
    valM = int(cVal[1])

    if valX == 0 and valM == 0: break
    else: print(f"{valX*valM}")
