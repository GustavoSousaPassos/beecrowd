ma = [[None for j in range(12)] for i in range(12)]
sum = 0.0

op = input()

for c in range(0, 12):
    for d in range(0, 12):
        ma[c][d] = float(input())

for i in range(0, 12):
    pivo = i + 1

    for j in range(pivo, 12):
        sum += ma[i][j]

if op != "S": sum /= 66.0

print(f"{sum:.1f}")



