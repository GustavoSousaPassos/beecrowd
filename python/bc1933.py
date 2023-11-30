cVal = input().split()

fVal = int(cVal[0])
sVal = int(cVal[1])

if fVal == sVal: res = fVal
else: res = fVal if fVal > sVal else sVal

print(res)