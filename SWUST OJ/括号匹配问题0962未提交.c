#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,j,sum;
	scanf("%s",str);
		sum=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='['||str[i]==']'||str[i]=='('||str[i]==')')
		sum++;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='(')
		{
		for(j=i;j<strlen(str);j++)
		{
			if(str[j]==')')
			{
				str[i]='0';
				str[j]='0';
				sum-=2;
				break;
			}
		}
		}
		if(str[i]=='[')
		{
		for(j=i;j<strlen(str);j++)
		{
			if(str[j]==']')
			{
				str[i]='0';
				str[j]='0';
				sum-=2;
				break;
			}
		}
		}
	}
	if(sum==0)
	printf("YES");
	else printf("NO");
	return 0;
} 
