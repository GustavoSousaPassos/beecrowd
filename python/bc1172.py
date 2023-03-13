vec = [None]*10

for c in range(0, 10):
    vec[c] = int(input())
    if vec[c] <= 0: vec[c] = 1

i = 0

for c in vec:
    print(f"x[{i}] = {c}")
    i += 1
    