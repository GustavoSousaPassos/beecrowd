vIn = 0
vGre = 0
epa = 0
nuG = 0

while True:
    cVal = input().split(" ")

    fVal = int(cVal[0])
    sVal = int(cVal[1])

    if fVal == sVal: epa += 1
    elif fVal > sVal: vIn += 1
    else: vGre += 1

    nuG += 1

    print("Novo grenal (1-sim 2-nao)")
    opc = int(input())

    if opc == 2: break

print(f"{nuG} grenais")
print(f"Inter:{vIn}\nGremio:{vGre}\nEmpates:{epa}")

vit = ""

if vIn == vGre: vit = "Nao houve vencedor"
elif vIn > vGre: vit = "Inter venceu mais"
else: vit = "Gremio venceu mais"

print(vit)