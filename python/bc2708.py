nJi = 0
to = 0
while True:
    line = input().split(" ")

    cmd = line[0]
    if cmd == "ABEND": break
    else:
        nPe = int(line[1])

        if cmd == "SALIDA":
            to += nPe
            nJi += 1
        elif cmd == "VUELTA":
            to -= nPe
            nJi -= 1

print(f"{to}\n{nJi}")