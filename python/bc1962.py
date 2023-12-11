count = int(input())

for c in range(0, count):

    ano = int(input())

    res = 2015 - ano

    #if res == 0: res += 1

    print(f"{res} D.C." if res > 0 else f"{abs(res)+1} A.C.")
