while True:
    msg = ""
    vec = input().split()

    fVal = int(vec[0])
    sVal = int(vec[1])

    if fVal == sVal: break
    elif fVal > sVal: msg = "Decrescente"
    else: msg = "Crescente"

    print(msg)