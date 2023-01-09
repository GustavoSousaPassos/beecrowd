fl = input().split(' ')
sl = input().split(' ')

qtdP1 = int(fl[1])
valP1 = float(fl[2])

qtdP2 = int(sl[1])
valP2 = float(sl[2])

print(f"VALOR A PAGAR: R$ {(valP1*qtdP1) + (valP2*qtdP2):.2f}")
