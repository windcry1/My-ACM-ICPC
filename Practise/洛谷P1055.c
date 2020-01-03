#include<stdio.h>
int main() 
{
    long a[13],sum,i,n;
    char c[13];
    scanf("%s",c);
    if(c[12]=='X')
    {
        a[12]=10;
    }
    else
    {
    	a[12]=c[12]-48;
	} 
    for(i=0;i<12;i++)
    {
        a[i]=c[i]-48;
    }
    sum=1*a[0]+2*a[2]+3*a[3]+4*a[4]+5*a[6]+6*a[7]+7*a[8]+8*a[9]+9*a[10];
    n=sum%11;
    if(n==a[12])
    {
        printf("Right");
    }
    else 
    {
    	if(n==10)
 	   {
      	  c[12]='X';
        }
  	  else
  	  	{
  	  	c[12]=(char)('0'+n);
        }
        printf("%s",c);
    }
    return 0;
}
