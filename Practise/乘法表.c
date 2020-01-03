#include <stdio.h>
int main() 
{ 
    int a[13],T,i,k,j;
    char str[10],t[5];
    scanf("%d",&T);
    for(i=0;i<T;i++) 
    {
    	scanf("%s%s",str,t);
    	if(t[0]=='e')
    	{
    	for(j=1;j<=12;j++)
    	a[i]=1;
    	a[str[i]-64]=0;
    	}
    	if(t[0]=='u' || t[0]=='l');
    	{
    	for(j=1;j<=12;j++)
    	a[i]=0;
    	a[str[i]-64]=1;
    	}
    	
	}
    return 0;
}
