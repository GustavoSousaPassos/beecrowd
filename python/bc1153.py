val = int(input())
fat = 1

for c in range(2, val+1):
    fat *= c

print(fat)
