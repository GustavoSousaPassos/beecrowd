count  = int(input())

for c in range(0, count):
    i = 0
    val = int(input())

    for d in range(1, val+1):
        if val % d == 0: i += 1

    if i == 2: print(f"{val} eh primo")
    else: print(f"{val} nao eh primo")