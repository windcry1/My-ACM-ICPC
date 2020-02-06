from math import *
T = int(input())
for cas in range(T):
    a,b,c,d,e,f,g = map(int,input().split())
    if(a**d+b**e+c**f==g):
        print("Yes")
    else:
        print("No")
