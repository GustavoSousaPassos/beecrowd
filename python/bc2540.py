from math import ceil
while True:
    count = 0
    nVo = 0
    try:
        nPe = int(input())

        vec = [int]*nPe

        line = input().split(" ")

        for c in range(0, nPe):
            vec[c] = int(line[c])

        for d in range(0, nPe):
            if vec[d] == 1: nVo += 1

        tVo = int(ceil((nPe/3)*2))

        res = "impeachment" if nVo >= tVo else "acusacao arquivada"
        print(res)

    except EOFError:
        break