from math import pow

count = int(input())

for c in range(1, count+1):
    print(f"{c} {pow(c, 2):.0f} {pow(c, 3):.0f}")
