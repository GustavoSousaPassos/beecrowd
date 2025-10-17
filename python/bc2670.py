res = 0
cVal = [int] * 3

cVal[0] = int(input())
cVal[1] = int(input())
cVal[2] = int(input())

mVal = max(cVal)
pos = cVal.index(mVal)

pAn = (cVal[2] * 4) + (cVal[1] * 2)
sAn = (cVal[0] * 2) + (cVal[2] * 2)
tAn = (cVal[0] * 4) + (cVal[1] * 2)

if pAn < sAn  and pAn < tAn: res = pAn
elif sAn < pAn and sAn < tAn: res = sAn
elif tAn < pAn and tAn < sAn: res += tAn
else: res = sAn

print(res)