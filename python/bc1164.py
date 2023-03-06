count = int(input())

for c in range(0, count):
    su = 0
    val = int(input())

    for d in range(1, val):
        if val % d == 0: su += d

    if su == val:
        print(f"{val} eh perfeito")
    else:
        print(f"{val} nao eh perfeito")