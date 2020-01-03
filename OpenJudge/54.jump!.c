#include<stdio.h>
#include<string.h>
int main()
{
	int a,n,i,num,c;
	char ch[100];
	while(scanf("%d%d",&a,&n)!=EOF)
	{
		memset(ch,0,sizeof(ch));
		num=0;c=0;
		for(i=0;i<n;i++)
		{
			scanf("%s",ch);
			if((a==0&&num==0&&strcmp(ch,"jump")==0)||(a==1&&(num==1||num==0)&&strcmp(ch,"jump")==0))
			{
				num++;
				c++; 
			}
			if((a==0&&num==1&&strcmp(ch,"stop")==0)||(a==1&&(num==1||num==2)&&strcmp(ch,"stop")==0))
			{
				num=0;
			}
		}
		printf("%d\n",c);
	}
	return 0;
} 
