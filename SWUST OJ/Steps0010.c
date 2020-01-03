#include<stdio.h>
int main()
{
	int n,x,y,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		if(y-x==0)
		{
			printf("0\n");
		}
		else
		{
			for(j=0;;j++)
			{
				if((j*j+j)>=(y-x))
				{
					break;
				}
			} 
			if((j*j)>=(y-x))
			{
				printf("%d\n",2*j-1); 
			}
			else
			{
				printf("%d\n",2*j);
			}
		}
	}
	return 0;
} 
