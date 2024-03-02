res = ""
count = int(input())

for c in range(0, count):
    fPl = input()
    sPl = input()

    if fPl == "pedra":
        if sPl == "ataque": res = "Jogador 2 venceu"
        elif sPl == "papel": res = "Jogador 1 venceu"
        else: res = "Sem ganhador"
    elif fPl == "papel":
        res = "Jogador 2 venceu" if sPl == "pedra" or sPl == "ataque" else "Ambos venceram"
    else:
        res = "Jogador 1 venceu" if sPl == "pedra" or sPl == "papel" else "Aniquilacao mutua"
    print(res)
