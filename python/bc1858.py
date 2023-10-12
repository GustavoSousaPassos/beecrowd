mIn = 1

nPe = int(input())
text = input().split(" ")

cVal = [int for j in range(nPe)]

i = 0
for c in range(0, len(text)):
    if text[c] != " ":
        cVal[i] = text[c]
        i += 1

menor = cVal[0]

for j in range(1, nPe):
    if cVal[j] < menor:
        menor = cVal[j]
        mIn = j + 1

print(mIn)