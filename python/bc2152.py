count = int(input())

for c in range(0, count):
    cVal = input().split(" ")

    ho = int(cVal[0])
    mi = int(cVal[1])
    val = int(cVal[2])

    res = "A porta abriu!" if val == 1 else "A porta fechou!"

    print(f"{ho:02d}:{mi:02d} - {res}")
