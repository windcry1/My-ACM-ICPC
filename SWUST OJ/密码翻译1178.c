#include<stdio.h>
int main()
{
	char ch[81];
	int n,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=80;j++)
		{
			ch[j]=0;
		}
	} 
	while(scanf("%s",ch)!=EOF)
    {
		for(j=0;j<=80;j++)
		{
			if((ch[j]<='Y'&&ch[j]>='A')||(ch[j]<='y'&&ch[j]>='a'))
         		ch[j]+=1;
			else if(ch[j]=='z')
				ch[j]='a';
			else if(ch[j]=='Z')
				ch[j]='A';
				if(ch[j+1]==0)
				break;
		}
		printf("%s\r\n",ch);
	 } 
	 return 0;
}
