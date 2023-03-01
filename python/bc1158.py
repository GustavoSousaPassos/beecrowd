cTe = int(input())

for c in range(0, cTe):
    som = 0
    count = 0

    cVal = input().split()

    x = int(cVal[0])
    y = int(cVal[1])

    while count != y:
        if x % 2 != 0:
            som += x
            count += 1
        x += 1
    print(som)
