s = 1.0
odd = 3
pair = 2

for c in range(1, 40):
    val = odd / pair
    s += val
    odd += 2
    pair *= 2

print(f"{s:.2f}")