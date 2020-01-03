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
char map[9][9];
int vis[9];
int n,m,sum,num;
void dfs(int x)//按照行数搜索 
{
	if(m==num)//如果做到了放入n个棋子，方案总数+1
	{
		sum++;
		return;
	}
	if(x>n-1)//不能越界 
		return;
	for(int j=0;j<n;j++)
	{
		if(!vis[j] && map[x][j]=='#')//如果这一层能放，就直接放进去，计数器+1 
		{
			vis[j]=1;//纵轴标记，不能再次访问 
			num++;
			dfs(x+1);
			num--;
			vis[j]=0;
		}
	}
	dfs(x+1); //如果这一行没有，就直接进入下一行，继续搜索 
}
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==-1&&m==-1)
			return 0;
		sum=0;num=0;
		for(int i=0;i<n;i++)
			scanf("%s",map[i]);
		memset(vis,0,sizeof(vis));
		dfs(0); 
		printf("%d\n",sum);
	}
	
	return 0;
}

