val = input().split(" ")

pNota = float(val[0])
sNota = float(val[1])
tNota = float(val[2])
qNota = float(val[3])

media = (pNota*2 + sNota*3 + tNota*4 + qNota*1) / 10.0

print(f"Media: {media:.1f}")

if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")

    nEx = float(input())

    print(f"Nota do exame: {nEx:.1f}")

    medF = (media + nEx) / 2

    if medF >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")

    print(f"Media final: {medF:.1f}")