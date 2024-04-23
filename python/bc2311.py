vec = [float]*7
nCa = int(input())

for c in range(0, nCa):
    res = 0

    name = input()
    med = float(input())

    line = input().split(" ")

    for d in range(0, 7):
        vec[d] = float(line[d])

    biggest = vec[0]
    smallest = biggest

    for e in range(0, 7):
        res += vec[e]
        if vec[e] > biggest: biggest = vec[e]
        if vec[e] < smallest: smallest = vec[e]

    res = (res - biggest - smallest) * med

    print(f"{name} {res:.2f}")
