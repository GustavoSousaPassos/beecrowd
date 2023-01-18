valIn = int(input())
val = valIn

c100 = c50 = c20 = c10 = c5 = c2 = c1 = 0

while True:
    if val >= 100:
        c100 += 1
        val -= 100
    elif val >= 50:
        c50 += 1
        val -= 50
    elif val >= 20:
        c20 += 1
        val -= 20
    elif val >= 10:
        c10 += 1
        val -= 10
    elif val >= 5:
        c5 += 1
        val -= 5
    elif val >= 2:
        c2 += 1
        val -= 2
    elif val >= 1:
        c1 += 1
        val -= 1
    else: break

print(valIn)
print(f"{c100} nota(s) de R$ 100,00")
print(f"{c50} nota(s) de R$ 50,00")
print(f"{c20} nota(s) de R$ 20,00")
print(f"{c10} nota(s) de R$ 10,00")
print(f"{c5} nota(s) de R$ 5,00")
print(f"{c2} nota(s) de R$ 2,00")
print(f"{c1} nota(s) de R$ 1,00")