c2 = 0
c3 = 0
c4 = 0
c5 = 0

tVec = int(input())
vec = input().split(" ")

for c in range(0, tVec):
    val = int(vec[c])

    if val % 2 == 0: c2 += 1
    if val % 3 == 0: c3 += 1
    if val % 4 == 0: c4 += 1
    if val % 5 == 0: c5 += 1

print(f"{c2} Multiplo(s) de 2\n{c3} Multiplo(s) de 3\n{c4} Multiplo(s) de 4\n{c5} Multiplo(s) de 5")
