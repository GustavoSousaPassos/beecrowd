cVal = input().split(" ")

p = int(cVal[0])
j1 = int(cVal[1])
j2 = int(cVal[2])
r = int(cVal[3])
a = int(cVal[4])

winner = 0

if a == 1:
    winner = 2 if r == 1 else 1
elif r == 1:
    winner = 1 if a == 0 else 2
else:
    if p == 1:
        winner = 1 if (j1+j2) % 2 == 0 else 2
    else:
        winner = 1 if (j1+j2) % 2 != 0 else 2

print(f"Jogador {winner} ganha!")