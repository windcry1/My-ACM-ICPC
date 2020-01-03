#include <stdio.h>
int main()
{
	int a[40]={1},n,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1)
			break;
	    a[2]=3;a[4]=11;
		for(i=6;i<=32;i++)
		{
			a[i]=3*a[i-2];
			for(j=i-4;j>=0;j=j-2)
			{
				a[i]+=2*a[j];
			}
		}
		if(n%2==0)
			printf("%d\n",a[n]);
		else
		printf("0\n");
	}
	return 0;
}

