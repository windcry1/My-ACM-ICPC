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
char map[5][5];
int Max=0,num,n;
bool judge(int x,int y)
{
	if(x<0||y<0||x>=n||y>=n)
		return false;
	for(int i=x;i>=0;i--)
	{
		if(map[i][y]=='*')//如果在这之前有碉堡出现，就不行
			return false;
		if(map[i][y]=='X')//找到墙壁的时候退出 
			break;
	}
	for(int i=y;i>=0;i--)
	{
		if(map[x][i]=='*')//纵轴同样 
			return false;
		if(map[x][i]=='X')
			break;
	}
	return true; 
}
void dfs(int x,int y)
{
	if(x==n)
	{
		Max=max(Max,num);
		return;
	}
	for(int j=y;j<n;j++)
	{
		if(map[x][j]=='.'&&judge(x,j))//如果这一层能放，就直接放进去，计数器+1
		{
			map[x][j]='*';
			num++;
			dfs(x,j+1);
			num--;
			map[x][j]='.';
		}
	}
	dfs(x+1,0); //如果这一行没有，就直接进入下一行，继续搜索
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0;
		Max=0,num=0;
		for(int i=0;i<n;i++)
			scanf("%s",map[i]);
		dfs(0,0);
		printf("%d\n",Max);
	}
	return 0;
}

