res = ['A', 'B', 'C', 'D', 'E']

while True:
    qBr = 0
    iCe = 0
    count = int(input())

    if count == 0: break
    else:
        for c in range(count):
            line = input().split(" ")
            
            for d in range(0, 5):
                val = int(line[d])

                if val <= 127: iCe = d 
                else: qBr += 1

            if qBr == 4: print(res[iCe])
            else: print("*")
