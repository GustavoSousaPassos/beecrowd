from math import pow

val = int(input())

cB = int(pow(val, 2) / 2)
cP = cB

if val % 2 != 0: cB += 1

print(f"{cB} casas brancas e {cP} casas pretas")