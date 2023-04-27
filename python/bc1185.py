ma = [[None for j in range(12)] for i in range(12)]
res = 0.0
sPoint = 11

op = input()

for c in range(0, 12):
    for d in range(0, 12):
        ma[c][d] = float(input())

for i in range(0, 12):
    for j in range(0, sPoint):
        res += ma[i][j]
    sPoint -= 1

if op != "S": res /= 66

print(f"{res:.1f}")