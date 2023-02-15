num = int(input())
bigger = 0
smaller = 0

for c in range(0, num):
    sumI = 0
    pVal = input().split()

    fVal = int(pVal[0])
    sVal = int(pVal[1])

    if fVal > sVal:
        bigger = fVal
        smaller = sVal
    else:
        bigger = sVal
        smaller = fVal

    for d in range(smaller+1, bigger):
        if d % 2 != 0: sumI += d

    print(sumI)