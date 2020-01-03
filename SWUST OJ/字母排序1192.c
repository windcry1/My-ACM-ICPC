#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001],t;
	while(scanf("%s",str)!=EOF)
	{
		int i,j,len,num=0,a[255]={0},max;
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			a[str[i]]++;
		} 
		for(i=0;;i++)
		{
			max=0;
			for(j=0;j<255;j++)
			{
				if(max<a[j])
				max=a[j];
			}
			//printf("%d",max);
			if(max==0)
			break;
			else if(max==a[i])
			{
				for(j=0;j<a[i];j++) 
				{
					printf("%c",i);
				}
				a[i]=0;i=0;
			}	
		}
		printf("\n");
		memset(str,0,sizeof(str));
	}
	return 0;
}
