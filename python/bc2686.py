res = ""
while True:
    try:
        an = float(input())

        if an < 0 or an > 360:
            h = 0
            m = 0
            s = 0
        else:
            h = (an // 15)
            m = (an % 15) * 4
            s = round((m - int(m)) * 60)

            h = (h + 6) % 24

        if an < 90 or an == 360:
            res = "Bom Dia!!"
        elif an < 180:
            res = "Boa Tarde!!"
        elif an < 270:
            res = "Boa Noite!!"
        else:
            res = "De Madrugada!!"

        print(res)
        print("{:02.0f}:{:02.0f}:{:02.0f}".format(h, m, s))
    except EOFError:
        break