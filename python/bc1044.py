cVal = input().split(" ")

fVal = int(cVal[0])
sVal = int(cVal[1])

res = "Sao Multiplos" if fVal % sVal == 0 or sVal % fVal == 0 else "Nao sao Multiplos"

print(res)
