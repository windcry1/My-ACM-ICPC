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
const int dir[8][2]={{-1,0},{1,0},{0,-1},{0,1},{1,1},{1,-1},{-1,-1},{-1,1}};
int sum,num,vis[11][11];
int n;
bool judge(int x,int y)
{
	int dx=x,dy=y;
	for(int i=0;i<8;i++)
	{
		dx=x;dy=y;
		while(1)
		{
			dx+=dir[i][0];
			dy+=dir[i][1];
			if(dx<0||dy<0||dx>=n||dy>=n)
				break;
			if(vis[dx][dy]==1)
				return false;
		}
	}
	return true;
}
void dfs(int x)
{
	if(sum==n)
	{
		num++;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(judge(x,i))
		{
			vis[x][i]=1;
			sum++;
			dfs(x+1);
			vis[x][i]=0;
			sum--;
		}
	}
}
int main()
{
	int a[12];
	for(int i=1;i<=10;i++)
	{
		num=0;
		sum=0;
		memset(vis,0,sizeof(vis));
		n=i;
		dfs(0);
		a[i]=num;
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0;
		printf("%d\n",a[n]);
	}
	return 0;
}

