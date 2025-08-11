res = 0

count = int(input())
li = input().split(" ")

for c in range(0, count):
    if li[c] == '1': res += 1

print(res)
