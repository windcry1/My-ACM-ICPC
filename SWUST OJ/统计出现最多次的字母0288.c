#include<stdio.h>
int main()
{
	int n,i,a[200]={0},max=0;
	char str[111],result;
	scanf("%d",&n);
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		a[str[i]]++;
	}
	for(i=0;i<200;i++)
	{
		if(max<a[i])
		{
			result=i;
			max=a[i];
		}
	}
	printf("%c\n",result);
	return 0;
}
