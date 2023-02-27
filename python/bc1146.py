while True:
    val = int(input())

    if val == 0: break
    else:
        for c in range(1, val):
            print(f"{c} ", end="")
        print(val)