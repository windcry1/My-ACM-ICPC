'''
from sys import *
q = int(stdin.readline())
while q:
    q = q - 1
    n = int(stdin.readline())
    a = list(map(int, stdin.readline().split()))
    Hash = [0] * (n+1)
    for i in a:
        Hash[i] += 1
    Hash.sort(reverse=True)
    res = 0
    now = int(1e9)
    for i in Hash:
        now = max(min(now-1, i), 0)
        res += now
    stdout.write(str(res)+"\n")
'''

'''
# Hack
def check(n):
    summed=0
    for i in n:
        summed+=int(i)
    if(summed%4==0):
        return n
    if((int(n[-1])+4-summed%4)<10):
        return n[:-1]+str(int(n[-1])+4-summed%4)
    else:
        out=0
        n=str(int(n[:-1])+1)+'0'
        for i in n:
            out+=int(i)
        if(out%4==0):
            return n
        if((0 + 4-out%4)<10):
            return n[:-1]+str(int(n[-1])+4-out%4)



n=input()
a=check(n)
print(int(a))
'''
'''
from sys import *
q = int(stdin.readline())
s1 = stdin.readline()
n = int(stdin.readline())
while n:
    n -= 1
    s2 = stdin.readline()
'''
a = dict['a':1]
print(type(a))

