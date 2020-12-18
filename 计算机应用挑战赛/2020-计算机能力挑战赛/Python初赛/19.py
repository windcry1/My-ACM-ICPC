n = int(input())
a = [[] for i in range(n)]
for i in range(n):
    a[i] = list(map(int, input().split()))
wa = []
for i in range(1, n-1):
    for j in range(1, n-1):
        if a[i+1][j] > a[i][j] and a[i][j+1] > a[i][j] and a[i][j-1] > a[i][j] and a[i-1][j] > a[i][j]:
            wa.append([i, j])
mi = 22222
pos = []
if len(wa) != 0:
    for l in wa:
        if a[l[0]][l[1]] < mi:
            mi = a[l[0]][l[1]]
            pos = l
    print("{} {}".format(pos[0] + 1, pos[1] + 1))
else:
    print("-1 -1")
