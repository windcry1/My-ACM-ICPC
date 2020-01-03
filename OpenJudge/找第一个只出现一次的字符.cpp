#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100000];
	int a[26],i,num=0,len;
	scanf("%s",ch);
	memset(a,0,sizeof(a));
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		a[ch[i]-'a']++;
	}
	//for(i=0;i<strlen(ch);i++)
		//printf("%d",a[ch[i]-'a']);
	for(i=0;i<len;i++)
	{
		if(a[ch[i]-'a']==1)
		{
		num++;
		printf("%c\n",ch[i]);
		break;
		}
	}
	if(num==0)
	printf("no\n");
	return 0;
} 
