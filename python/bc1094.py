qtdE = int(input())
tCo = 0
tRa = 0
tSa = 0
total = 0

for c in range(1, qtdE+1):
    cVal = input().split()
    qtd = int(cVal[0])
    tC = cVal[1]

    if tC == 'C': tCo += qtd
    elif tC == 'R': tRa += qtd
    elif tC == 'S': tSa += qtd

    total += qtd

print(f"Total: {total} cobaias\nTotal de coelhos: {tCo}\nTotal de ratos: {tRa}\nTotal de sapos: {tSa}")
print(f"Percentual de coelhos: {tCo/total*100:.2f} %\nPercentual de ratos: {tRa/total*100:.2f} %\nPercentual de sapos: {tSa/total*100:.2f} %")
