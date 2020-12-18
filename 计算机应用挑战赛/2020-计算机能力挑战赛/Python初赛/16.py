n, m = map(int, input().split())
res = []
for i in range(n+1, m):
    if 3 * i % 4 == 0:
        res.append(i)
while len(res) < 3:
    res.append(-1)
for i in range(3):
    print(res[i], end=" \n"[i == 2])
