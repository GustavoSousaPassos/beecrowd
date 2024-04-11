count = int(input())

vec = [int]*count

line = input().split(" ")

for c in range(0, count):
    vec[c] = int(line[c])

res = 0
for d in range(0, count-1):
    if vec[d] > vec[d+1]:
        res = d + 2
        break

print(f"{res}")