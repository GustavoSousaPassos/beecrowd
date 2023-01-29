count = 0
soma = 0.0

for c in range(0, 6):
    val  = float(input())

    if val > 0:
        count += 1
        soma += val

med = soma / count

print(f"{count} valores positivos\n{med:.1f}")