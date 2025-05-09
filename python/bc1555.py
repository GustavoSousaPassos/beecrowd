from math import pow

res = ""

count = int(input())

for c in range(0, count):
    cVal = input().split()

    x = int(cVal[0])
    y = int(cVal[1])

    ra = pow(3*x, 2) + pow(y, 2);
    be = (2 * pow(x, 2)) +  pow(5*y, 2);
    ca = -100*x + pow(y, 3);

    if ra > be and ra > ca: res = "Rafael ganhou"
    elif be > ra and be > ca: res = "Beto ganhou"
    else: res = "Carlos ganhou"

    print(res)
