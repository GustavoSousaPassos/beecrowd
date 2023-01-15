from math import sqrt, pow

p1 = input().split(" ")
x1 = float(p1[0])
y1 = float(p1[1])

p2 = input().split(" ")
x2 = float(p2[0])
y2 = float(p2[1])

dis = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2))

print(f"{dis:.4f}")