#include<stdio.h>
#include<string.h>
int main()
{
	char s[52];
	int i,l;
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			s[i]=s[i]-60;
			if((i+1)%2==0)
			{
				if(s[3]==2)
					s[3]=74;
				s[i]=(s[i]-2)/2/(i+1);
			}
			else if((i+1)%2==1)
			{
				s[i]=s[i]/(i+1)-1;
			}
		}
		for(i=0;i<l;i++)
		{
			printf("%d",s[i]);
		}
		printf("\n");
	}
	return 0;
}
