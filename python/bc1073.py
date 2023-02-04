from math import pow

iN = int(input())

for i in  range(1, iN+1):
    if i % 2 == 0:
        print(f"{i}^2 = {pow(i, 2):.0f}")