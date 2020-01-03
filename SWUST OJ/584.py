"""
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
"""
from sys import *
a,b,c,n = map(int,stdin.readline().split())

first = 1
second = 0
third = 0
for i in range(1,1+n):
    first_t = first
    second_t = second
    third_t = third
    third = second_t+third_t
    first = a*first_t + b*second_t + c*third_t
    second = first_t
print(first+second+third)