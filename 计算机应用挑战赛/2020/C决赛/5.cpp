#include<stdio.h>
int main()
{
int n,m=0;
scanf("%d",&n);
while(n!=0){
m=m*10+n%10+1;
n=n/10;
}
printf("%d",m);
return 0;
}
