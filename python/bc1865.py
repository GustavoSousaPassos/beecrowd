count = int(input())
res = ''
for i in range(0, count):
    cVal = input().split(" ")

    name = cVal[0]
    force = int(cVal[1])

    if name == "Thor": res = 'Y'
    else: res = 'N'

    print(res)