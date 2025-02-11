res = ""
while True:
    try:
        val = int(input())

        if val < 90 or val == 360: res = "Bom Dia!!"
        elif val < 180: res = "Boa Tarde!!"
        elif val < 270: res = "Boa Noite!!"
        else: res = "De Madrugada!!"

        print(res)
    except EOFError:
        break
