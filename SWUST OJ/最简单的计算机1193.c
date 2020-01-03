#include<stdio.h>
#include<string.h>
int main()
{
	int M1,M2,i;
	char ch[201];
	while(scanf("%d%d",&M1,&M2)!=EOF)
	{
		int R1=0,R2=0,R3=0;
		scanf("%s",ch);
			//printf("%c\n",ch);
		for(i=0;i<strlen(ch);i++)
		{
		if(ch[i]=='A')
		R1=M1;
		if(ch[i]=='B')
		R2=M2;
		if(ch[i]=='C')
		M1=R3;
		if(ch[i]=='D')
		M2=R3;
		if(ch[i]=='E')
		R3=R1+R2;
		if(ch[i]=='F')
		R3=R1-R2;
		}
		printf("%d,%d\n",M1,M2);
	}
	return 0;
}
