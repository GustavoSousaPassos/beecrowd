from math import pow

while True:
    try:
        v = float(input())
        d = float(input())
    except EOFError:
        break
    else:
        area = pow(d/2, 2) * 3.14
        print(f"ALTURA = {v / area:.2f}\nAREA = {area:.2f}")
