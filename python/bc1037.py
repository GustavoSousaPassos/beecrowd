valF = float(input())

if valF < 0 or valF > 100.00:
    print("Fora de intervalo")
else:
    if valF <= 25.00:
        msg = "[0,25]"
    elif valF <= 50.00:
        msg = "(25,50]"
    elif valF <= 75.00:
        msg = "(50,75]"
    else:
        msg = "(75,100]"

    print(f"Intervalo {msg}")