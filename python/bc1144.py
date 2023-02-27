from math import pow

val = int(input())

for c in range(1, val+1):
    sRes = pow(c, 2)
    tRes = pow(c, 3)

    print(f"{c} {sRes:.0f} {tRes:.0f}")
    print(f"{c} {sRes+1:.0f} {tRes+1:.0f}")