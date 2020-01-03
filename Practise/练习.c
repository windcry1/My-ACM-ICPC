#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int i;
	int sum=0;
	char ch[100000];
	scanf("%s",ch);
	for(i=0;i<strlen(ch);i++)
	{
	sum+=ch[i]-'0';
	}
	printf("%d %d\r\n",strlen(ch),sum);
	return 0;
}
