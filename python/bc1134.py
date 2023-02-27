al = 0
gas = 0
di = 0

while True:
    tCo = int(input())

    if tCo == 1: al += 1
    elif tCo == 2: gas += 1
    elif tCo == 3: di += 1
    else:
        if tCo == 4: break

print("MUITO OBRIGADO")
print(f"Alcool: {al}\nGasolina: {gas}\nDiesel: {di}")