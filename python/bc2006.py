count = 0
vec = [int] * 5

tTea = int(input())
line = input().split(" ")

vec[0] = int(line[0])
vec[1] = int(line[1])
vec[2] = int(line[2])
vec[3] = int(line[3])
vec[4] = int(line[4])

for i in range(0, 5):
    if vec[i] == tTea: count += 1

print(count)
