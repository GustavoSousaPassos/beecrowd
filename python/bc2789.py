res = 0

count = int(input())

for c in range(0, count):
    num = int(input())
    res += 1 if num != 1 else 0

print(res)