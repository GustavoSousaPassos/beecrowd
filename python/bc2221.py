valB = 0
res = ""
count = int(input())

for i in range(0, count):
    bo = int(input())

    fLi = input().split(" ")

    fVaA = int(fLi[0])
    fVaD = int(fLi[1])
    fLv = int(fLi[2])

    sLi = input().split(" ")

    sVaA = int(sLi[0])
    sVaD = int(sLi[1])
    sLv = int(sLi[2])

    valB = bo if fLv % 2 == 0 else 0

    fVaG = ((fVaA + fVaD) / 2) + valB

    valB = bo if sLv % 2 == 0 else 0

    sVaG = ((sVaA + sVaD) / 2) + valB

    if fVaG > sVaG: res = "Dabriel"
    elif fVaG < sVaG: res = "Guarte"
    else: res = "Empate"

    print(f"{res}")