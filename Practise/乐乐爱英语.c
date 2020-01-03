#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char c[501][21],a[501][21];
	for(i=0;;i++)
	{
		scanf("%s",c[i]);
		if(getchar()=='\n')
			break;
	}
	for(j=0;j<=i;i++)
	printf("%s",c[i]);
}
