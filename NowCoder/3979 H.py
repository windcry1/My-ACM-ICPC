from math import *


def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


T = int(input())
for cas in range(T):
    n, k = map(int, input().split())
    vis = [0 for i in range(n+2)]
    i = 2
    res = 1
    while i*k <= n:
        if vis[i*k]:
            i += 1
            continue
        res=i*res//gcd(res,i)
        j = i * k
        while j <= n:
            vis[j]=1
            j += i * k
        i += 1
    print(res*k)

