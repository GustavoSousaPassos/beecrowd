bigger = int(input())
pos = 1

for c in range(2, 100+1):
    val = int(input())

    if val > bigger:
        bigger = val
        pos = c

print(f"{bigger}\n{pos}")