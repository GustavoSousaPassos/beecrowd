cVal = input().split(" ")

p = int(cVal[0])
r = int(cVal[1])

if p == 0: res = 'C'
else: res = 'B' if r == 0 else 'A'

print(res)