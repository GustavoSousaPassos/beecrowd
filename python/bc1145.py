cVal = input().split(" ")
count = 0

fVal = int(cVal[0])
sVal = int(cVal[1])

print(1, end="")

for i in range(2, sVal):
    if count == fVal-1:
        print(f"\n{i}", end="")
        count = 0
    else:
        print(f" {i}", end="")
        count += 1

print(f" {sVal}")