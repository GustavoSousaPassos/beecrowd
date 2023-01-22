from math import pow, sqrt

cVal = input().split(" ")

valA = float(cVal[0])
valB = float(cVal[1])
valC = float(cVal[2])

delta = pow(valB, 2) -4*valA*valC

if delta < 0 or valA == 0.0:
    print("Impossivel calcular")
else:
    r1 = (-valB + sqrt(delta)) / (2.0*valA)
    r2 = (-valB - sqrt(delta)) / (2.0*valA)

    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")