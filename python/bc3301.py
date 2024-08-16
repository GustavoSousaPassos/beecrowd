res = ""
cVal = input().split(" ")

h = int(cVal[0])
z = int(cVal[1])
l = int(cVal[2])

if (h > z and h < l) or (h < z and h > l): res = "huguinho"
elif (z > h and z < l) or (z < h and z > l): res = "zezinho"
else: res = "luisinho"

print(res)
