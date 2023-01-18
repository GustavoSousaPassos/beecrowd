t = int(input())
tF = 0

h = m = s = 0

while tF != t:
    s += 1

    if s == 60:
        m += 1
        s = 0
    if m == 60:
        h += 1
        m = 0
    tF += 1

print(f"{h}:{m}:{s}")