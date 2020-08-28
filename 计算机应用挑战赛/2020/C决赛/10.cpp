#include<stdio.h>
#include<stdlib.h>
int fun(int t, int d[50])
{
  int a,b,c=0;
  for(a=2;a<=t;a++)
  {
   for(b=2;b<a;b++)
    if(a%b==0)break;
    if(b>=a) d[c++]=a;
  }
  return c;
}
int main()
{
  int t,i,s;
  int d[50]; 
  scanf("%d",&t);
  s=fun(t,d);        
  printf("%d\n",s);
}
