li = int(input())
j = 1

for c in range(0, li):
    k = 0

    while k != 4:
        if j % 4 == 0: print("PUM")
        else: print(j, end=" ")

        j += 1
        k += 1