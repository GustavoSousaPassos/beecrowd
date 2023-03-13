vec = [None]*10

val = int(input())
vec[0] = val

for c in range(1, 10):
    vec[c] = vec[c-1] * 2

for c in range(0, 10):
    print(f"N[{c}] = {vec[c]}")