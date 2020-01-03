#include<stdio.h>
#include<string.h>
int main()
{
	int n,j=0,i;
	char str[10001],ori[13]="tanwanlanyue";
	scanf("%d%s",&n,str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ori[j])
		{
			j++;
		}
			if(j==12)
			break;
	}
	if(j==12)
	printf("YES\n");
	else printf("NO\n");
	return 0;
}
