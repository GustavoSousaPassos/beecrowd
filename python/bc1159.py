while True:
    soma = 0

    val = int(input())

    if val == 0: break
    else:
        count = 0

        while True:
            if val % 2 == 0:
                soma += val
                count += 1
            if count == 5: break
            else:
                val += 1

    print(soma)