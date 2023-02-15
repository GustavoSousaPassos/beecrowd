cont = int(input())

for c in range(0, cont):
    cVal = input().split(" ")

    fVal = int(cVal[0])
    sVal = int(cVal[1])

    if sVal == 0: print("divisao impossivel")
    else: print(f"{fVal / sVal:.1f}")
