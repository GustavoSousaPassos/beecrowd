valIn = int(input())

year = int(valIn / 360)
mounth = int((valIn % 365) / 30)

if(((valIn%360)%30)%5 == 0): day = (valIn%365) % 30
else : day = ((valIn%360)%30) - 5 * year

print(f"{year} ano(s)\n{mounth} mes(es)\n{day} dia(s)")