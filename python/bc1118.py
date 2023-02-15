j = 0

while j == 0:
    i = 0
    soma = 0

    while i != 2:
        val = float(input())

        if val >= 0.0 and val <= 10.0:
            i += 1
            soma += val
        else: print("nota invalida")

    print(f"media = {soma / 2:.2f}")

    while True:
        print("novo calculo (1-sim 2-nao)")
        opc = int(input())

        if opc == 2:
            j = 1
            break
        if opc == 1: break