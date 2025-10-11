line = list(map(int, input().split(" ")))
cVal = []
so = 0

if line[1] > 0:
    cVal.append(line[0])
    cVal.append(line[1])
else:
    for c in range(1, len(line)):
        if line[c] > 0:
            cVal.append(line[0])
            cVal.append(line[c])
            break

for c in range(0, 2):
    if c == 0:
        for d in range(0, cVal[0] + 1): so += d
    else:
        for d in range(0, cVal[c]): so += d

print(f"{so}")