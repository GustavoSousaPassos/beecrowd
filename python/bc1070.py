val = int(input())
count = 0

while True:
    if val % 2 != 0:
        print(val)
        count += 1
    if count > 5: break
    else:
        val += 1