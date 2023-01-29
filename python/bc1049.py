fDe = input()
sDe = input()
tDe = input()

if fDe == "vertebrado":
    if sDe == "ave":
        res = "aguia" if tDe == "carnivoro" else "pomba"
    else:
        res = "homem" if tDe == "onivoro" else "vaca"
else:
    if sDe == "inseto":
        res = "pulga" if tDe == "hematofago" else "lagarta"
    else:
        res = "sanguessuga" if tDe == "hematofago" else "minhoca"

print(res)