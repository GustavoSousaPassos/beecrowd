ma = [[None for j in range(12)] for i in range(12)]
sum = 0.0
lPos = 5

op = input()

for c in range(0, 12):
    for d in range(0, 12):
        ma[c][d] = float(input())

for i in range(1, 6):
    for j in range(0, i):
        sum += ma[i][j]

for i in range(6, 11):
    for j in range(0, lPos):
        sum += ma[i][j]
    lPos -= 1

if op != "S": sum /= 30.0

print(f"{sum:.1f}")