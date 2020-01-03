#include<bits/stdc++.h>
using namespace std;
struct X
{
	char name[21],sex[10];
	double score1,score2;
	double final;
}X[101],T;
int main()
{
	int t,n,m,flag;
	double s1,s2,max1,max2;
	cin>>t;
	while(t--)
	{
		max1=-1;max2=-1;
		flag=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			scanf("%s%s%lf%lf",X[i].name,X[i].sex,&X[i].score1,&X[i].score2);
			if(max1<X[i].score1)
			{
				max1=X[i].score1;
			}
			if(max2<X[i].score2)
			{
				max2=X[i].score2;
			}
		}
		s1=300/max1;s2=300/max2;
		for(int i=0;i<n;i++)
		{
			X[i].score1*=s1;
			X[i].score2*=s2;
			X[i].final=0.3*X[i].score1+0.7*X[i].score2;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(X[j].final<X[j+1].final)
				{
					T=X[j];
					X[j]=X[j+1];
					X[j+1]=T;
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			if(strcmp(X[i].sex,"female")==0)
				flag=1;
		}//有女生 
		if(flag!=1)//如果没有女生 
		{
			for(int i=m;i<n;i++)
			{
				if(strcmp(X[i].sex,"female")==0)
				{
					T=X[i];
					X[i]=X[m-1];
					X[m-1]=T;
					break;
				}
			}
		}
		printf("The member list of Shandong team is as follows:\n");
		for(int i=0;i<m;i++)
			printf("%s\n",X[i].name);
		//printf("%lf\n",X[i].final);
	}
	return 0;
}
