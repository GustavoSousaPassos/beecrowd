while True:
    msg = ""
    cVal = input().split()

    x = int(cVal[0])
    y = int(cVal[1])

    if x == 0 or y == 0: break
    else:
        fVer = x >= 1
        sVer = y >= 1

        if fVer == True and sVer == True: msg = "primeiro"
        elif fVer == False and sVer == True: msg = "segundo"
        elif fVer == False and sVer == False: msg = "terceiro"
        else: msg = "quarto"

        print(msg)