cVal = input().split(" ")

fVal = int(cVal[0])
sVal = int(cVal[1])
tVal = int(cVal[2])

for j in range(0,3):
    for i in range(0,2):
        if int(cVal[i]) > int(cVal[i+1]):
            aux = cVal[i+1]
            cVal[i+1] = cVal[i]
            cVal[i] = aux;

for c in range(0,3): print(cVal[c])

print(f"\n{fVal}\n{sVal}\n{tVal}")