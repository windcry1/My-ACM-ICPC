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
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int a[101][101],n,vis[101];
int flag;
int MAX;
void dfs(int x,int num,int count)
{
	if(count==n)
	{
		if(MAX>num)
			MAX=num;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[x][i]&&!vis[i])
			{
				vis[i]++;
				dfs(i,num+a[x][i],count+1);
				vis[i]--;
			}
		}
	}
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		MAX=MMAX;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		dfs(0,0,0);
		printf("%d\n",MAX);
	}
	return 0;
}

