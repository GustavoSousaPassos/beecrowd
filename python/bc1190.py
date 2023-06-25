cVal = [[None for j in range(12)] for i in range(12)]
val = 10
res = 0.0
op = input()

for i in range(12):
    for j in range(12):
        cVal[i][j] = float(input())

for c in range(1, 6):
    for d in range(11, val, -1):
        res += cVal[c][d]
    val -= 1

for i in range(6, 11):
    for j in range(i+1, 12):
        res += cVal[i][j]

if op != "S": res /= 30.0

print(f"{res:.1f}")