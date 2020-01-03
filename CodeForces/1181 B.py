a = int(input())
n = input()
INF = 1e100001
res = INF
wei = INF
for i in range(1, a):
    if n[i] != '0':
        wei = min(wei, max(i, a-i))
for i in range(1, a):
    if n[i] != '0' and max(i, a-i) <= wei:
        res = min(int(n[:i])+int(n[i:]), res)
        wei = max(i, a-i)
print(res)
