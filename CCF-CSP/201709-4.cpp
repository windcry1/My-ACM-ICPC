//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
vector<int> mat[1001];
int map[1001][1001];
int vis[10001];
int n,m;
void dfs(int a,int *vis,int b)
{
	vis[a]=1;
	map[b][a]=1;
	map[a][b]=1;
	for(int i=0;i<mat[a].size();i++)
	{
		if(!vis[mat[a][i]])//b到a,a到i推出b到i
			dfs(mat[a][i],vis,b);
	}
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b,i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int count=0;
		while(m--)
		{
			scanf("%d%d",&a,&b);
			mat[a].push_back(b);
		}
		for(i=1;i<=n;i++)
		{
			memset(vis,0,sizeof(vis));
			dfs(i,vis,i);
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(map[i][j]==0)
					break;
			}
			if(j==n+1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

