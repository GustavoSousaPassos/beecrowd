while True:
    try:
        val = int(input())
        res = "vai ter copa!" if val == 0 else "vai ter duas!"
        print(res)
    except EOFError:
        break