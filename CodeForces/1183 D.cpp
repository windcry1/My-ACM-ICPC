//Author:LanceYu
#pragma GCC optimize(2)
#include<cstdio>
#include<algorithm> 
#include<cstring>
#include<iostream>
using namespace std;
const int MMAX=0x7fffffff;
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
 	int q,n,t;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&n);
		int Hash[n+1]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&t);
			Hash[t]++;
		}
		sort(Hash+1,Hash+n+1);
		int res=0,now=n+1;
		for(int i=n;i>=1;i--)
		{
			now=max(min(now-1,Hash[i]),0);
			res+=now;
		}
		printf("%d\n",res);
	}
 	return 0;
}
