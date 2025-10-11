while True:
    rJo = rMa = 0
    count = int(input())

    if count == 0: break

    cVal = input().split(" ")

    for c in cVal:
        if c == '0': rMa += 1
        else: rJo += 1

    print(f"Mary won {rMa} times and John won {rJo} times")