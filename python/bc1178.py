val = float(input())
vec = [None]*100
vec[0] = val

for i in range(1, 100):
    vec[i] = vec[i-1] / 2.0

for c in range(0, 100):
    print(f"N[{c}] = {vec[c]:.4f}")