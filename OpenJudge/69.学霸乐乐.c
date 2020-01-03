#include<stdio.h>
#include<string.h>
int main()
{
	int n,a[101],i;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(n==1&&(a[0]!=85&&a[0]!=100))
			printf("wo ye hen meng bi!\n");
		else if((a[n-1]>a[n-2]&&a[n-1]!=100)||a[n-1]==85)
			printf("lele,ni shi zai tai qiang le!\n");
		else if(a[n-1]==100||(a[n-1]<a[n-2]&&a[n-1]!=85))
			printf("lele,ni you gu yi kao cha!\n");
		else 
			printf("wo ye hen meng bi!\n");
	}
	return 0;
} 
