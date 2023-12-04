count = int(input())
sT = 0
bT = 0
aT = 0

sA = 0
bA = 0
aA = 0
for c in range(0, count):
    name = input()
    cVal = input().split(" ")

    sT += int(cVal[0])
    bT += int(cVal[1])
    aT += int(cVal[2])

    vec = input().split(" ")

    sA += int(vec[0])
    bA += int(vec[1])
    aA += int(vec[2])

print(f"Pontos de Saque: {sA/sT*100.0:.2f} %.\nPontos de Bloqueio: {bA / bT * 100.0:.2f} %.\nPontos de Ataque: {aA/aT*100.0:.2f} %.")
