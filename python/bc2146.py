while True:
    try:
        sIn = int(input())
        print(f"{sIn-1}")
    except EOFError:
        break