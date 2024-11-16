while True:
    try:
        msg = {
            0: "Putz vei, o Leo ta demorando muito pra jogar...",
            1: "Os atributos dos monstros vao ser inteligencia, sabedoria...",
            2: "Iron Maiden's gonna get you, no matter how far!",
            3: "Urano perdeu algo muito precioso..."
        }
        res = -1
        line = input().split(" ")

        dodo = line[0]
        leo = line[1]
        pepper = line[2]

        if dodo == leo and leo == pepper: res = 0
        else:
            if (dodo == "papel" and leo == "pedra" and pepper == "pedra") or \
                (dodo == "tesoura" and leo == "papel" and pepper == "papel") or \
                (dodo == "pedra" and leo == "tesoura" and pepper == "tesoura"):  res = 1
            elif (leo == "papel" and dodo == "pedra" and pepper == "pedra"): res = 2

        print(f"{msg[res]}")
    except EOFError:
        break