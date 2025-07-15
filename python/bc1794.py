tRo = int(input())

fLi = input().split(" ")
lA = int(fLi[0])
lB = int(fLi[1])

sLi = input().split(" ")
sA = int(sLi[0])
sB = int(sLi[1])

res = "possivel" if (tRo >= lA and tRo <= lB) and (tRo >= sA and tRo <= sB) else "impossivel"

print(res)