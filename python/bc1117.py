i = 0
s = 0.0

while i < 2:
    val = float(input())

    if val < 0.0 or val > 10.0: print("nota invalida")
    else:
        i += 1
        s += val

print(f"media = {s / 2:.2f}")