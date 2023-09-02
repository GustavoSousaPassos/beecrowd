count = int(input())

for c in range(1, count+1):
    cVal = input().split(" ")

    fVal = cVal[0]
    sVal = cVal[1]

    winner = 0

    if fVal == sVal: winner = 0
    elif fVal == "tesoura":
        if sVal == "papel" or sVal == "lagarto": winner = 1
        else: winner = 2
    elif fVal == "papel":
        winner = 1 if sVal == "pedra" or sVal == "Spock" else 2
    elif fVal == "pedra":
        winner = 1 if sVal == "tesoura" or sVal == "lagarto" else 2
    elif fVal == "lagarto":
        winner = 1 if sVal == "Spock" or sVal == "papel" else 2
    else:
        winner = 1 if sVal == "pedra" or sVal == "tesoura" else 2

    res = ""

    if winner == 1: res = "Bazinga!"
    elif winner == 2: res = "Raj trapaceou!"
    else: res = "De novo!"

    print(f"Caso #{c}: {res}")
