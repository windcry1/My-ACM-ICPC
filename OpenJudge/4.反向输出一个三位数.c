#include<stdio.h>
int main()
{
int n,a,b,c;
scanf("%d",&n);
a=n%10;
b=(n/10)%10;
c=n/100;
printf("%d%d%d",a,b,c);
return 0;
}
