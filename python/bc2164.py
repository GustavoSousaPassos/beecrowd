from math import pow, sqrt

num = int(input())

fPa = pow((1 + sqrt(5)) / 2, num)
sPa = pow((1 - sqrt(5)) / 2, num)
res = (fPa - sPa) / sqrt(5)

print(f"{res:.1f}")
