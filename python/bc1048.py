sal = float(input())

if sal <= 400.00: pRe = 15
elif sal <= 800.00: pRE = 12
elif sal <= 1200.00: pRe = 10
elif sal <= 2000.00: pRe = 7
else: pRe = 4

print(f"Novo salario: {sal+pRe/100*sal:.2f}\nReajuste ganho: {pRe/100*sal:.2f}\nEm precentual: {pRe} %")