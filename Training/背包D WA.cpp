//Author:LanceYu
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[110000];
int w[110000],v[110000];
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,t,c;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		c=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%d",&t);
				w[c]=j;
				v[c]=t;
				c++;
			}
		}
//		printf("%d\n",c);
//		for(int i=1;i<c;i++)
//			printf("%d %d\n",w[i],v[i]);
		memset(dp,0,sizeof(dp));
		for(int i=1;i<c;i++)
			for(int j=m;j>=w[i];j--)
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		printf("%d\n",dp[m]);
	}
 	return 0;
}
