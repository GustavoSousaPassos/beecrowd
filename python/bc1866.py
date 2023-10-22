count = int(input())

for c in range(0, count):
    val = int(input())
    res = 0 if val % 2 == 0 else 1
    print(res)