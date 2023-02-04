iVec = int(input())
cIn = 0
cOut = 0

for i in range(0, iVec):
    val = int(input())

    if val >= 10 and val <= 20: cIn += 1
    else: cOut += 1

print(f"{cIn} in\n{cOut} out")
