valX = int(input())
valZ = 0

while True:
    valZ = int(input())
    if valZ > valX: break

som = 0
i = som

for c in range(valX, valZ+1):
    som += c
    i += 1
    if som > valZ: break

print(i)
