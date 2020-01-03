#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
using namespace std;
float F(int n)
{
    if(n==1)
    return 11;
    return (F(n-1)*(7-n)+1)/(6-n);
}
int main()
{
    printf("%.0f",F(5));
    return 0;
}
