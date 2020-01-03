#include <bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
int main()
{
	int n,m,t;
	while(~scanf("%d%d%d",&n,&m,&t))
	{
		
		for(int i=0;i<n;i++)
		{
			a[i]=0;
		}
		for(int i=0;i<m;i++)
		{
			b[i]=0;
		}
		
		for(int i=0;i<t;i++)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			x--;y--;
			a[x]=a[x]^1;
			b[y]=b[y]^1;
		}
		int sum1=0;
		int sum2=0;
		int sum3=0;
		int sum4=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==1) sum1++;
			else sum2++;
		}
		for(int i=0;i<m;i++)
		{
			if(b[i]==1) sum3++;
			else sum4++;
		}
		sum1=sum1*sum3+sum4*sum2;
		cout<<sum1<<endl;
	}
	return 0;
}
