#include<bits/stdc++.h>
using namespace std;
int l,m,n,a[500001];
bool cow(int mid)
{
	int sum=1,g=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i+1]-a[g]>mid)
		{
			sum++;
			g=i;
		}
	}
	if(sum>m)
		return false;
	else
		return true;
}

int main()
{
	int i,j,L,R,mid,T,maxx;
	while(scanf("%d%d%d",&l,&n,&m)!=EOF)
	{
		maxx=0;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		a[0]=0;a[n+1]=l;
		sort(a+1,a+n+1);
		for(i=0;i<=n;i++)
		{
			if(a[i+1]-a[i]>maxx)
				maxx=a[i+1]-a[i];
		}
		L=maxx;R=l;
		while(L<=R)
		{
			mid=(L+R)/2;
			if(cow(mid))
			{
				R=mid-1;
				T=mid;
			}
			else
				L=mid+1;
		}
		cout<<T<<endl;
	}
	return 0;
}
