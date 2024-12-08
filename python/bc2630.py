nCa = int(input())

for c in range(0, nCa):
    res = 0
    opc = input()
    cVal = input().split(" ")

    r = int(cVal[0])
    g = int(cVal[1])
    b = int(cVal[2])

    if opc == "mean": res = int((r+g+b) / 3)
    elif opc == "eye":  res = int(0.3*r + 0.59*g + 0.11*b)
    elif opc == "min":
        if r < g and r < b: res = r
        elif g < r and g < b: res = g
        elif b < r and b < g: res = b
        else: res = r
    elif opc == "max":
        if r > g and r > b: res = r
        elif g > r and g > b: res = g
        elif b > r and b > g: res = b
        else: res = r

    print(f"Caso #{c+1}: {res}")
