#include<stdio.h>
#include<string.h>
char a[100][100],b[100][100],t[100];
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",a[i],b[i]);	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(b[j],b[j+1])>0)
			{
				strcpy(t,b[j]);
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],t);
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
