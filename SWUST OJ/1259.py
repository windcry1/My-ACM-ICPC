mod = int(1e9+7)


def imp(a, b):
    res = int(1)
    while b:
        if b & 1:
            res = res * a % mod
        b = b >> 1
        a = a * a % mod
    return res


n, m = map(int, input().split())
# n = n % (mod - 1)
print(imp(2, n) % mod)
