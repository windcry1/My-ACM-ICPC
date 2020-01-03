#include<stdio.h>
int main()
{
	int n,result=0,temp;
	scanf("%d",&n);
	temp=n;
	if(n<1)
	{
		while(1)
		{
			result+=temp;
			if(temp==1)
				break;
			temp++;
		}
	}
	else
	{
		while(1)
		{
			result+=temp;
			if(temp==1)
				break;
			temp--;
		}
	}
	printf("%d\n",result);
	return 0;
}
