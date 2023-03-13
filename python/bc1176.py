count = int(input())
fib = [None] * 61

fib[0] = 0
fib[1] = 1

for c in range(2, 61):
    fib[c] = fib[c-2] + fib[c-1]

for c in range(0, count):
    pos = int(input())
    print(f"Fib({pos}) = {fib[pos]}")