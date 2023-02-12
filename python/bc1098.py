i = 0
j = 1

for c in range(0, 10):
    for d in range(0, 3):
        if i == 0 or i == 1.0:
            print(f"I={i:.0f} J={j:.0f}")
        else:
            print(f"I={i:.1f} J={j:.1f}")
        j += 1
    i += 0.2
    j -= 3.0
    j += 0.2

for c in range(0, 1):
    for d in range(0, 3):
        print(f"I={i:.0f} J={j:.0f}")
        j += 1