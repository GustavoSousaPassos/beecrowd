count = int(input())
vec = input().split(" ")
sNum = int(vec[0])
pos = 0
for c in range(1, count):
    val = int(vec[c])

    if val < sNum:
        sNum = val
        pos = c

print(f"Menor valor: {sNum}\nPosicao: {pos}")