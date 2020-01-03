#include<stdio.h>
#include<string.h>
int main()
{
	char a[70];
	int i,j,k,len;
	while(scanf("%s",a)!=EOF)
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]=='Y'&&a[i+1]=='Y')
			{
				printf("= =\n");
				break;
			}	
		}
		if(a[i]!='Y')
		{
		for(i=0;i<len;i++)
		{
			k=-1;j=-1;
			if(a[i]=='Z')
			{
				for(j=0;j<len;j++)
				{
					k=-1;
					if(a[j]=='Y')
					{
						for(k=0;k<len;k++)
						{
							if(a[k]=='C')
							{
								printf("^v^\n");
								break;
							}
						}
					}
					if(a[k]=='C')
						break;
				}
			}
			if(a[k]=='C')
				break;
		}
		if(a[k]!='C')
		printf("= =\n");
		}
	}
	return 0;
} 
