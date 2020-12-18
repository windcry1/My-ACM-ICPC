s = str(input())
pos = []
for i in range(len(s)-8):
    if s[i:i+9] == "_1234.exe":
        pos.append(i)
print(len(pos), end=" \n"[len(pos) == 0])
for i in range(len(pos)):
    print(pos[i], end=" \n"[i == len(pos)-1])
