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
const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
const int dir[2][2]={1,0,0,1};
int rem[101][101];
int map[101][101],n,m;
int sum;
bool judge(int x,int y)
{
	if(x<0||y<0||x>=n||y>=m)
		return false;
	return true;
}
int dfs(int x,int y)
{
	if(rem[x][y]>=0)
		return rem[x][y];
	if(x==n-1&&y==m-1)
		return 1; 
	rem[x][y]=0;
	for(int i=x;i<=map[x][y]+x;i++)
		for(int j=y;j<=y+map[x][y]-(i-x);j++)
			if(judge(i,j))//如果没有越界的话，加上 
				rem[x][y]=(dfs(i,j)+rem[x][y])%10000;
	return rem[x][y];
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		memset(rem,-1,sizeof(rem));
		sum=0;
		rem[n-1][m-1]=1;//最后一个是1，向上递归 
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&map[i][j]);
		printf("%d\n",dfs(0,0));
	}
	return 0;
}

