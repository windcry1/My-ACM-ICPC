#include<stdio.h>
int main()
{
	int n,i,j;
	while (scanf("%d",&n)!=EOF)
	{
		j=1;
		for(i=n;i>0;i--)
		{
			if((n%i)==0)
			{
			for(j=i-1;j>1;j--)
			{
				if((i%j)==0)
				break;
			}
			if(j==1)
			break;
			}
		}
		printf("%d\n",i); 
	}
	return 0;
}
