#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
bool b[maxn*3];
int T,n,m;
vector<int>v1;
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		v1.clear();
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n*3;i++)b[i]=0;
		for(int i=1,tmp1,tmp2;i<=m;i++)
		{
			scanf("%d%d",&tmp1,&tmp2);
			if(!b[tmp1]&&!b[tmp2])b[tmp1]=b[tmp2]=1,v1.push_back(i);
		}
		if(v1.size()>=n)
		{
			puts("Matching");
			for(int i=0;i<n;i++)
			{
				printf("%d ",v1[i]);
			}
			puts("");
		}
		else
		{
			puts("IndSet");int cnt=0;
			for(int i=1;i<=3*n;i++)
			{
				if(!b[i])
				{
					printf("%d ",i);
					cnt++;
					if(cnt==n)break;
				}
			}
			puts("");
		}
	}
}
