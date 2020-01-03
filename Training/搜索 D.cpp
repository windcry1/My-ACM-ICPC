//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
const int dir[6][3]={-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1}; 
int dp[21][21];
bool vis[21];
int m,cnt;
vector<int> v;
void dfs(int x)
{
	if(x==m&&vis[x])
	{
		if(v.size()==21)
		{
			cout<<++cnt<<":  ";
			vector<int>::const_iterator it;
			for(it=v.begin();it!=v.end();it++)
			{
				if(it==v.begin())cout<<(*it);
				else cout<<" "<<(*it);
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=20;i++)
	{
		if(dp[i][x]&&!vis[i])
		{
			vis[i]=true;
			v.push_back(i);
			dfs(i);
			vis[i]=false;
			v.pop_back();
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
	int a,b,c;
	while(cin>>a&&a)
	{
		cin>>b>>c;
		dp[1][a]=true;dp[1][b]=true;dp[1][c]=true;
		dp[a][1]=true;dp[b][1]=true;dp[c][1]=true;
		for(int i=2;i<=20;i++)
		{
			cin>>a>>b>>c;
			dp[i][a]=true;dp[i][b]=true;dp[i][c]=true;
			dp[a][i]=true;dp[b][i]=true;dp[c][i]=true;
		}
		cin>>m;
		v.push_back(m);
		dfs(m);
	}
 	return 0;
}

