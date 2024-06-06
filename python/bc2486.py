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

            if nAl == "suco de laranja": sTo += qtdA*120
            elif nAl == "laranja": sTo += qtdA*50
            elif nAl == "morango fresco": sTo += qtdA*85
            elif nAl == "mamao": sTo += qtdA*85
            elif nAl == "goiaba vermelha": sTo += qtdA*70
            elif nAl == "manga": sTo += qtdA*56
            elif nAl == "brocolis": sTo += qtdA*34

            nAl = ""

        if sTo < 110: print(f"Mais {110-sTo} mg")
        elif sTo > 130: print(f"Menos {sTo-130} mg")
        else: print(f"{sTo} mg")
