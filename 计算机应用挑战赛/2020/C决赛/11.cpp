#include <stdio.h>
#define N 4
int main()
{
  int a,b,t;
  a=1;
  while(a<=N) /*1*/
  {  
  t=1;                   /*2*/
  for(b=1;b<=N;b++,t++)
      if(t>N)     
   printf("%d",t/N);  /*3*/
    else      
   printf("%d",t);   
   printf("\n");      
      a=a+t;           /*4*/
  }
}
