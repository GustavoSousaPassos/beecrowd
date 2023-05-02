ma = [[None for j in range(12)] for i in range(12)]
res = 0.0
aux = 10
count = 1

op = input()

for c in range(0, 12):
    for d in range(0, 12):
        ma[c][d] = float(input())

for c in range(0, 12):
    for d in range(count, aux+1):
        res += ma[c][d];
    aux -= 1
    count += 1

if op != "S": res /= 30.0

print(f"{res:.1f}")