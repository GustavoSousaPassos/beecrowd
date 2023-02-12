i = 1
j = 7

for c in range(1, 16):
    if j < 5:
        j = 7
        i += 2

    print(f"I={i} J={j}")
    j -= 1