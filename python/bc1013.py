l = input().split(' ')

valA = int(l[0])
valB = int(l[1])
valC = int(l[2])

mAB = int((valA + valB + abs(valA - valB)) / 2)

if(mAB > valC): print(f"{mAB} eh o maior")
else: print(f"{valC} eh o maior")
