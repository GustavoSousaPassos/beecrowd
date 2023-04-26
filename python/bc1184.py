ma = [[None for j in range(12)] for i in range(12)]
res = 0.0
pivo = 1
op = input()

for i in range(0, 12):
    for j in range(0, 12):
        ma[i][j] = float(input())

for c in range(1, 12):
    for d in range(0, pivo):
        res += ma[c][d]
    pivo += 1

if(op != "S"): res /= 66.0

print(f"{res:.1f}")
