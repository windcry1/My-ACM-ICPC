#include<stdio.h>
#include<string.h>
int main()
{
	int N,NA,NB,i,sum[100],A,B,ansa=0,ansb=0;
	char a[100],b[100];
	scanf("%d %d %d",&N,&NA,&NB);
	for(i=0;i<NA;i++)
	{
		scanf("%d",&a[i]);
	}
	A=strlen(a);
	for(i=0;i<NB;i++)
	{
		scanf("%d",&b[i]);
	}
	B=strlen(b);
	for(i=0;i<N-NA;i++)
	{
		a[i+NA]=a[i];
	}
	for(i=0;i<N-NB;i++)
	{
		b[i+NB]=b[i];
	}
	for(i=0;i<N;i++)
	{
		if(a[i]==0 && b[i]==2)ansa++;
		if(a[i]==0 && b[i]==5)ansb++;
		if(a[i]==2 && b[i]==0)ansb++;
		if(a[i]==2 && b[i]==5)ansa++;
		if(a[i]==5 && b[i]==0)ansa++;
		if(a[i]==5 && b[i]==2)ansb++;
	}
	if(ansa>ansb)printf("A");
	if(ansa<ansb)printf("B");
	if(ansa==ansb)printf("draw");
	return 0;
}
