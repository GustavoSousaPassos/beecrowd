while True:
    sTo = 0
    nAl = ""
    qtdL = int(input())

    if qtdL == 0: break
    else:
        for d in range(0, qtdL):
            line = input().split(" ")

            qtdA = int(line[0])
            tam = len(line)

            for c in range(1, tam-1):
                nAl += line[c]
                nAl += " "
            nAl += line[tam-1]

            print(f"{qtdA}  {nAl}")

            nAl = ""