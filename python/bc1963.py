from math import fabs

cVal = input().split(" ")

fPri = float(cVal[0])
sPri = float(cVal[1])

agree = fabs((fPri - sPri) / fPri * 100.0)

print(f"{agree:.2f}%")
