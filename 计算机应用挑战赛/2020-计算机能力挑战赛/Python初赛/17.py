n, m = map(int, input().split())
a = list(map(int, input().split()))
mx = -1
pos = -1
for i in range(len(a)-2):
    tot = 1
    for j in range(3):
        tot *= a[i+j]
    if tot > mx:
        mx = tot
        pos = i + 1
print("{} {}".format(mx, pos))
