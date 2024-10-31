nCa = int(input())

al = ["PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"]

for c in range(0, nCa):
    vec = input().split(" ")

    fVal = int(vec[0])
    sVal = int(vec[1])
    so = fVal+sVal
    print(f"{al[so]}")
