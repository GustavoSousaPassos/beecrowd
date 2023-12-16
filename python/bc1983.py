aEs = 0
nEs = 0.0

qtdA = int(input())

for i in range(0, qtdA):
    cVal = input().split(" ")

    nMa = int(cVal[0])
    nota = float(cVal[1])

    if nota > nEs and nota >= 8:
        aEs = nMa
        nEs = nota

res = "Minimum note not reached" if nEs == 0 else aEs

print(f"{res}")

