ma = [[None for j in range(12)] for i in range(12)]
res = 0.0
fPos = 5
lPos = 6

op = input()

for i in range(0, 12):
    for j in range(0, 12):
        ma[i][j] = float(input())

for i in range(7, 12):
    for j in range(fPos, lPos+1):
        res += ma[i][j]
    fPos -= 1
    lPos += 1

if op != "S": res /= 30.0

print(f"{res:.1f}")