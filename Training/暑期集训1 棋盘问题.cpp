//Author:LanceYu
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
char a[10][10];
bool vis[10];
int n,k,cnt;
void dfs(int x,int sum)
{
	if(x==n)
	{
		if(k==sum)
			cnt++;
		return;
	}
	for(int j=0;j<n;j++)
	{
		if(!vis[j]&&a[x][j]=='#')
		{
			vis[j]=1;
			dfs(x+1,sum+1);
			vis[j]=0;
		}
	}
	dfs(x+1,sum);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n>>k&&n!=-1&&k!=-1)
	{
		cnt=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		memset(vis,false,sizeof(vis));
		dfs(0,0);
		cout<<cnt<<endl;
	}
	return 0;
}
