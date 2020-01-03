#include<stdio.h>
int main()
{
	int num1,num2,n,t,l,score1,score2,i;
	while(scanf("%d",&n)!=EOF)
	{
		score1=0;score2=0;
		num1=0;num2=0;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&t,&l);
		if(l==1)
		{ 
			score1+=t;
			num1++; 
		} 
		if(l==2)
		{
			score2+=t;
			num2++;
		}
		}
		printf("%d %d\r\n",score1/num1,score2/num2);
	}
	return 0;
} 
