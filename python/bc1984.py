res = ""

num = int(input())

nCo = str(num)
tam = len(nCo) - 1

for i in range(tam, -1, -1):
    res += nCo[i]

print(f"{res}")