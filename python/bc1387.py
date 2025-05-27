while True:
    cVal = input().split(" ")

    fVal = int(cVal[0])
    sVal = int(cVal[1])

    if fVal == 0 and sVal == 0: break
    else: print(f"{fVal+sVal}")
