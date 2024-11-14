while True:
    try:
        msg = ["Banana", "sla", "oooo"]
        res = -1
        line = input().split(" ")

        dodo = line[0]
        leo = line[1]
        pepper = line[2]

        if dodo == leo and leo == pepper: res = 0

        print(f"{msg[res]}")
    except EOFError:
        break