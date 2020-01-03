/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 9:36:59 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int dp[30][30];
bool vis[30];
int n,m;
int flag;
void dfs(int x)
{
	if(!flag) cout<<(char)(x+'A'),flag=1;
	else cout<<" "<<(char)(x+'A');
	for(int i=0;i<n;i++)
	{
		if(dp[x][i]&&!vis[i])
		{
			vis[i]=1;
			dfs(i);
		}
	}
}
void bfs(int x)
{
	vis[x]=1;
	queue<int> q;
	q.push(x);
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		if(!flag)
			cout<<(char)(t+'A'),flag=1;
		else cout<<" "<<(char)(t+'A');
		for(int i=0;i<n;i++)
		{
			if(dp[i][t]&&!vis[i])
			{
				vis[i]=1;
				q.push(i);
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m;
	map<int,char> ma;
	for(int i=0;i<n;i++)
	{
		char c;cin>>c;
		ma[c]=i;
	}
	while(m--)
	{
		char a,b;
		cin>>a>>b;
		dp[ma[a]][ma[b]]=1;
		dp[ma[b]][ma[a]]=1;
	}
	bfs(0);
	cout<<endl;
	memset(vis,0,sizeof(vis));
	flag=0;
	vis[0]=true;
	dfs(0);
	cout<<endl;
	return 0;
}

