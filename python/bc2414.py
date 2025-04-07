line = input().split(" ")
tam  = len(line)
vec = [int]*tam

for c in range(0, tam):
    vec[c] = int(line[c])

bi = vec[0]

for c in range(1, tam):
    if vec[c] > bi: bi = vec[c]

print(f"{bi}")