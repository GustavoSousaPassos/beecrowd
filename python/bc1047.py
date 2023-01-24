cVal = input().split(" ")

hIni = int(cVal[0])
mIni = int(cVal[1])
hFin = int(cVal[2])
mFin = int(cVal[3])

dHor = 24 + (hFin - hIni) if hFin < hIni or hFin == hIni else hFin - hIni
dMin = 60 + (mFin - mIni) if mFin < mIni or mFin == mIni else mFin - mIni

if dMin ==  60: dMin = 0
if mIni - 60 > mFin - 60: dHor -= 1
if dHor == 24 and dMin > 0: dHor = 0

print(f"O JOGO DUROU {dHor} HORA(S) E {dMin} MINUTO(S)")