vec = [float]*100

for c in range(0, 100):
    vec[c] = float(input())

for c in range(0, 100):
    if vec[c] <= 10.0:
        print(f"A[{c}] = {vec[c]:.1f}")
