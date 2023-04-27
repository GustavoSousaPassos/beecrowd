ma = [[None for j in range(12)] for i in range(12)]
res = 0.0
sPoint = 11

op = input()

for i in range(12):
    for j in range(12):
        ma[i][j] = float(input())

for c in range(12):
    pivo = sPoint + 1

    for d in range(pivo, 12):
        res += ma[c][d]
    sPoint -= 1

if op != "S": res /= 66

print(f"{res:.1f}")
