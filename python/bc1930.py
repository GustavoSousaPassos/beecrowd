cVal = input().split(" ")
res = 0
for c in range(0, 4):
    res += int(cVal[c])

print(f"{res-3}")