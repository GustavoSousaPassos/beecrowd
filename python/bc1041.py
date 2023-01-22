cVal = input().split(" ")

x = float(cVal[0])
y = float(cVal[1])

if x == 0.0 and y == 0.0: res = "Origem"
elif (x > 0.0 or x < 0.0) and y == 0.0: res = "Eixo X"
elif x == 0.0 and (y > 0.0 or y < 0.0): res = "Eixo Y"
else:
    if x > 0.0 and y > 0.0: res = "Q1"
    elif x < 0.0 and y > 0.0: res = "Q2"
    elif x < 0.0 and y < 0.0: res = "Q3"
    else: res = "Q4"

print(res)