#include<stdio.h>
#include<string.h> 
int main()
{
	char n[23][100],temp[1000];
	int i,j,N,a[23],t;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%d",n[i],&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
				strcpy(temp,n[j+1]);
				strcpy(n[j+1],n[j]);
				strcpy(n[j],temp);
			}
			if(a[j]==a[j+1])
			{
				if(strncmp(n[j],n[j+1],1000)>0)
				{
					t=a[j+1];
					a[j+1]=a[j];
					a[j]=t;
					strcpy(temp,n[j+1]);
					strcpy(n[j+1],n[j]);
					strcpy(n[j],temp);
				}
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%s %d\n",n[i],a[i]);
	}
	return 0;
} 
