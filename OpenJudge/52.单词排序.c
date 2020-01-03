#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l;
	char a[1002][102],t[102],c;
	memset(a,0,sizeof(a));
	for(i=0;;i++)
	{
		for(k=0;;k++)
		{
			c=getchar();
			if(c==' '||c=='\n')
			{
				break;
			}
			a[i][k]=c;
		}
		if(c=='\n')
			break;
	}
	/*num=0;
	for(k=0;k<i;k++)
	{
		for(j=k+1;j<i+1;j++)
		{
			if(strcmp(a[k],a[j])==0)
			{
				for(l=0;l<102;l++)
				{
					a[j][l]=0;
				}
				num++;
			}
		}
	}*/
	for(k=0;k<i+1;k++)
	{
		for(j=0;j<i+1;j++)
		{
			if(strcmp(a[j],a[j+1])<0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	for(k=i+1;k>=0;k--)
	{
		if(strcmp(a[k],a[k+1])==0)
			continue;
		printf("%s\n",a[k]);
	}
	return 0;
}
