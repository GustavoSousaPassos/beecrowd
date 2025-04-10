fVec = input().split(" ")
kTo = int(fVec[0])
dPe = int(fVec[1])

sVec = input().split(" ")
vKi = int(sVec[0])
vPe = int(sVec[1])

nPe = kTo // dPe

print(kTo*vKi + nPe*vPe)