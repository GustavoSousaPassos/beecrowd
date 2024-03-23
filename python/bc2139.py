dMo = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

while True:
    sDay = 0
    res = ""
    try:
        cVal = input().split(" ")
        mo = int(cVal[0])
        day = int(cVal[1])
    except EOFError:
        break
    if mo == 12:
        if day == 25: res = "E natal!"
        elif day == 24: res = "E vespera de natal!"
        else: res = "Ja passou!"
    else:
        for c in range(mo, 12): sDay += dMo[c-1]

        sDay -= day
        sDay += 25

        res = "Faltam {} dias para o natal!".format(sDay)

    print(res)