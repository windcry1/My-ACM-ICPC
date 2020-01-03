#include<stdio.h>
#include<string.h> 
int main()
{
	char n[102][100],temp[20],IDL[102][20];
	int i,j,N,a[102]={0},t,num=0,b[101];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%d",n[i],&a[i]);
	}
	for(i=0;i<N;i++)
	{
		if(a[i]>=60)
		{
		b[i]=a[i];
		a[i]=0;
		num++;
		strcpy(IDL[i],n[i]);
		memset(n[i],0,sizeof(n[i]));
		}
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j+1];
				b[j+1]=b[j];
				b[j]=t;
				strcpy(temp,IDL[j+1]);
				strcpy(IDL[j+1],IDL[j]);
				strcpy(IDL[j],temp);
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%s\n",IDL[i]);
	}//ÀÏÄêÈËÅÅÐò
	for(i=0;i<N;i++)
	{
		if(a[i]!=0)
		printf("%s\n",n[i]);
	} 
	return 0;
} 
