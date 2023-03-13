vec = [None]*1000
i = 0
val = int(input())

for c in range(0, 1000):
    vec[c] = i

    if i == val-1: i = 0
    else: i += 1

for j in range(0, 1000):
    print(f"N[{j}] = {vec[j]}")