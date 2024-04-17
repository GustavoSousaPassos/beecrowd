gra = int(input())

res = ''

if gra == 0: res = 'E'
elif gra <= 35: res = 'D'
elif gra <= 60: res = 'C'
elif gra <= 85: res = 'B'
else: res = 'A'

print(res)