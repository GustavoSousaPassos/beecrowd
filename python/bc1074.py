iN = int(input())

for i in range(0, iN):
    res = ""
    val = int(input())

    if(val == 0): res = "NULL"
    else:
        res += "EVEN" if val % 2 == 0 else "ODD"
        res += " POSITIVE" if val > 0 else " NEGATIVE"
    print(res)