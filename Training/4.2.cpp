//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int n,k;
int dp[101][101],map[101][101];
const int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}}; 
bool judge(int x,int y,int x1,int y1)
{
	if(x<0||y<0||x>=n||y>=n)
		return false;
	if(map[x][y]<=map[x1][y1])
		return false;
	return true;
}
int dfs(int x,int y)
{
	if(dp[x][y])
		return dp[x][y];
	int maxm=0;
	for(int i=1;i<=k;i++)
	{
		for(int j=0;j<4;j++)//未被搜索的点向四周寻找点 
		{
			int dx=x+dir[j][0]*i;
			int dy=y+dir[j][1]*i;
			if(judge(dx,dy,x,y))
				maxm=max(maxm,dfs(dx,dy));
		}
	}
	return dp[x][y]=maxm+map[x][y];//走不通了返回0，0处获得的大小 
}
int main()
{
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		if(n==-1&&k==-1)
			return 0;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&map[i][j]);
		printf("%d\n",dfs(0,0)); 
	}
	return 0;
}

