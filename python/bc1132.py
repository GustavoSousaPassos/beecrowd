fVal = int(input())
sVal = int(input())
su = 0

if fVal > sVal:
    for c in range(sVal, fVal):
        if c % 13 != 0: su += c
else:
    for c in range(fVal, sVal):
        if c % 13 != 0: su += c

print(su)