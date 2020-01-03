#include<stdio.h>
int main()
{
    int n,k,temp,result;
    scanf("%d %d",&n,&k);
    temp=n;
    while(temp>=k)
    {
    	result+=temp;
    	temp=(int)(temp/k);
	}
    printf("%d",result);
    return 0;
}
