cVal = input().split(" ")

fPib = float(cVal[0]) / 100.0 + 1.0
sPib = float(cVal[1]) / 100.0 + 1.0

res = (fPib * sPib - 1) * 100.0

print(f"{res:.6f}")

