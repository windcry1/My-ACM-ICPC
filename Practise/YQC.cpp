//ª®∆ﬂ√Î 21:13:56 
#include<stdio.h>
#include<string.h>
int main()
{
	int a[22][22];
	int n;
	while(scanf("%d",&n)&&n)
	{
		for(int i=0;i<n;i++)
		{
			a[i][0]=1;
			for(int j=0;j<n;j++)
			{
				if(j>=1&&j<=i-1)
				{
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
				else if(i==j)
				{
					a[i][j]=1;
				}
			}
		} 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
			   if(i==j)
			   {
			   	  printf("%d\n",a[i][j]);
			   }
			   else
			   {
			   	  printf("%d ",a[i][j]);
			   }
			}
		}
	}
	return 0;
}

