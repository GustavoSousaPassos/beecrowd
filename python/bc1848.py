for c in range(0, 3):
    sum = 0

    while True:
        val = input()

        if val == "caw caw":
            print(f"{sum}")
            break
        else:
            if val == "*--": sum += 4
            elif val == "--*": sum += 1
            elif val == "*-*": sum += 5
            elif val == "-*-": sum += 2
            elif val == "**-": sum += 6
            elif val == "-**": sum += 3
            elif val == "***": sum += 7
            else: sum += 0