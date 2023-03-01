som = 0
count = 0

while True:
    val = int(input())

    if val < 0: break
    else:
        som += val
        count += 1

print(f"{som/count:.2f}")