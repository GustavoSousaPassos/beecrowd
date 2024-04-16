count = 0
vec = input()

tam = len(vec)

for c in range(0, tam):
    if vec[c] == "1": count += 1

vec += "0" if count % 2 == 0 else "1"
print(f"{vec}")
