#include<stdio.h>
#include<string.h>
int main()
{
	char ch[81];
	int n,i,j,C;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(ch);
		C=strlen(ch);
		for(j=0;j<C;j++)
		{
			if((ch[j]<='Y'&&ch[j]>='A')||(ch[j]<='y'&&ch[j]>='a'))
			{
         		ch[j]+=1;
         	}
			else if(ch[j]=='z')
			{
				ch[j]='a';
			}
			else if(ch[j]=='Z')
			{
				ch[j]='A';
			}
				if(ch[j+1]==0)
				{
				break;
				}
		}
		puts(ch);
	 } 
	 return 0;
}
