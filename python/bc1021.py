val = float(input())

n100 = n50 = n20 = n10 = n5 = n2 = 0
m1 = m50 = m25 = m10 = m5 = m01 = 0

while True:
    if val >= 100:
        n100 += 1
        val -= 100
    elif val >= 50:
        n50 += 1
        val -= 50
    elif val >= 20:
        n20 += 1
        val -= 20
    elif val >= 10:
        n10 += 1
        val -= 10
    elif val >= 5:
        n5 += 1
        val -= 5
    elif val >= 2:
        n2 += 1
        val -= 2
    elif val >= 1.00:
        m1 += 1
        val -= 1.00
    elif val >= 0.50:
        m50 += 1
        val -= 0.50
    elif val >= 0.25:
        m25 += 1
        val -= 0.25
    elif val >= 0.10:
        m10 += 1
        val -= 0.10
    elif val >= 0.05:
        m5 += 1
        val -= 0.05
    elif val >= 0.01 or val >= 0.001:
        m01 += 1
        val -= 0.01
    else: break

print("NOTAS:")
print(f"{n100} nota(s) de R$ 100.00")
print(f"{n50} nota(s) de R$ 50.00")
print(f"{n20} nota(s) de R$ 20.00")
print(f"{n10} nota(s) de R$ 10.00")
print(f"{n5} nota(s) de R$ 5.00")
print(f"{n2} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{m1} moeda(s) de R$ 1.00")
print(f"{m50} moeda(s) de R$ 0.50")
print(f"{m25} moeda(s) de R$ 0.25")
print(f"{m10} moeda(s) de R$ 0.10")
print(f"{m5} moeda(s) de R$ 0.05")
print(f"{m01} moeda(s) de R$ 0.01")