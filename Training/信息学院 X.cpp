//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
//º«ÁâÉ´Å®Éñ£¡£¡£¡£¡£¡ 
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int dir[2][2]={1,0,0,1};
int dp[25][1010],a[25][1010];
int n,m;
int dfs(int stx,int sty)
{
	if(stx==n&&sty==m)
		return a[stx][sty];
	if(dp[stx][sty]!=-INF)
		return dp[stx][sty];
	int MAX=-INF;
	if(stx+1<=n)
		MAX=max(dfs(stx+1,sty),MAX);
	if(sty+1<=m)
		MAX=max(dfs(stx,sty+1),MAX);
	for(int i=2;i*sty<=m;i++)
		MAX=max(MAX,dfs(stx,sty*i));
	return dp[stx][sty]=MAX+a[stx][sty];
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<=n;i++)
			for(int j=0;j<=m;j++)
				dp[i][j]=-INF;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		cout<<dfs(1,1)<<endl;
	}
 	return 0;
}

