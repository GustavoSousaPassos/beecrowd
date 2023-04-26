ma = [[None for j in range(12)] for i in range(12)]
sum = 0.0

col = int(input())
op = input()

for c in range(0, 12):
    for d in range(0, 12):
        ma[c][d] = float(input())

for i in range(0, 12):
    sum += ma[i][col]

if op != "S": sum /= 12

print(f"{sum:.1f}")