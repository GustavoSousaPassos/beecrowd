cVal = [int]*16
for c in range(0, 16): cVal[c] = c

fLi = "---------------------------------------"

print(fLi)
print("| decimal   |  octal  |  Hexadecimal  |")
print(fLi)

for i in range(0, 16):
    li = ""
    li += f"|{cVal[i]:>7}    |"
    li += f"{oct(cVal[i])[2::]:>5}    |"
    li += f"{hex(cVal[i]).upper()[2::]:>8}       |"
    print(li)
print(fLi)