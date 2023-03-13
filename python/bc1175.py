vec = [int]*20

for c in range(19, -1, -1):
    vec[c] = int(input())

for c in range(0, 20):
    print(f"N[{c}] = {vec[c]}")