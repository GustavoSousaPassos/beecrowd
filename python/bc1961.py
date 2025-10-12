res = "YOU WIN"
aPu, qCa = map(int, input().split())
sCa = list(map(int, input().split()))

for c in range(0, qCa - 1):
    if abs((sCa[c] - sCa[c + 1])) > aPu:
        res = "GAME OVER"
        break

print(res)