ma = [[None for j in range(12)] for i in range(12)]
res = 0.0

li = int(input())
op = str(input())

for i in range(0, 12):
    for j in range(0, 12):
        val = float(input())
        ma[i][j] = val

for k in range(0, 12):
    res += ma[li][k]

if op == "S":
    print(f"{res:.1f}")
else:
    res = res / 12
    print(f"{res:.1f}")
