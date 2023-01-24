cVal = input().split(" ")

mIni = int(cVal[0])
mFin = int(cVal[1])

res = 24 + (mFin - mIni) if (mFin < mIni) or (mFin == mIni) else mFin - mIni

print(f"O JOGO DUROU {res} HORA(S)")