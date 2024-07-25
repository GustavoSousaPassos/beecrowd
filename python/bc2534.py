while True:
    try:
        line = input().split(" ")

        qtdN = int(line[0])
        nCh = int(line[1])

        vec = [int]*qtdN

        for c in range(0, qtdN):
            vec[c] = int(input())

        vec.sort(reverse=True)

        for c in range(0, nCh):
            val = int(input())
            print(f"{vec[val-1]}")
    except EOFError:
        break