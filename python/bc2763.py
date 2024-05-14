cpf = input().replace("-", ".").split(".")

for c in range(0, 4):
    print(f"{cpf[c]}")