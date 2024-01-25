nPe = int(input())
vec = {"1001":1.50, "1002":2.50, "1003":3.50, "1004":4.50, "1005":5.50}
total = 0.0

for c in range(0, nPe):
    cVal = input().split(" ")

    fVal = cVal[0]
    qtd = int(cVal[1])

    total += vec[fVal] * qtd

print(f"{total:.2f}")
