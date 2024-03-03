cVal = input().split(" ")

pa = int(cVal[0])
hVi = int(cVal[1])
fu = int(cVal[2])

res = pa + hVi + fu

if res < 0: res += 24
elif res > 24: res -= 24

print(res)