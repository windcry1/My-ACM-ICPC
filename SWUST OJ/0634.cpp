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
const int dir[4][2]={0,-1,0,1,-1,0,1,0};
int Map[105][105];
int rem[105][105];//记录已处理完的节点
int n,m;
bool judge(int x,int y,int x1,int y1)
{
	if(x<=0||y<=0||x>n||y>m)
		return false;
	if(Map[x][y]<=Map[x1][y1])
		return false;
	return true;//没有越界且能向下面滑 
}
int dfs(int x,int y)
{
    if(rem[x][y])
		return rem[x][y];//当前节点已处理过
	int maxm=1;
	for(int i=0;i<4;i++)
	{
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(judge(dx,dy,x,y)) 
			maxm=max(maxm,1+dfs(dx,dy));//查找周围最大的值 
	}
    return rem[x][y]=maxm;
}
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
    {
		int Max=0;
	    memset(rem,0,sizeof(rem));
	    for(int i=1;i<=n;i++)
	        for(int j=1;j<=m;j++)
				scanf("%d",&Map[i][j]);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				Max=max(Max,dfs(i,j));
	    printf("%d\n",Max);
	}
	return 0;
}
