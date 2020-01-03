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
int a[201][201],need[201][201];
int E;
int n,m,T,S,x,y,MAX,t;
void dfs(int p,int count,int flag)
{
	if(MAX>count&&p==1&&flag==t)
	{
		MAX=count;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[p][i])
		{
			a[p][i]--;
			if(need[p][i])
			{
				need[p][i]--;
				dfs(i,count+1,flag+1);
				need[p][i]++;
			}
			else dfs(i,count+1,flag);
			a[p][i]++;
		}
	}
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char s[3];
	while(scanf("%d%d%d",&T,&S,&E)!=EOF)
	{
		while(T--)
		{
			MAX=MMAX;
			scanf("%d%d",&n,&m);
			memset(a,0,sizeof(a));
			memset(need,0,sizeof(need));
			t=0;
			while(m--)
			{
				scanf("%d%d%s",&x,&y,s);
				if(strcmp(s,"A")==0)
				{
					need[x][y]++;
					t++;
					a[x][y]+=2;
				}
				else if(strcmp(s,"B")==0)
				{
					need[x][y]++;
					t++;
					a[x][y]++;
				}
				else if(strcmp(s,"C")==0)
					a[x][y]+=2;
				else if(strcmp(s,"D")==0)
					a[x][y]+=1;
			}
			dfs(1,0,0);
			if(MAX!=MMAX)
				printf("%d\n",E*MAX);
			else
				printf("-1\n");
		}
	}
	return 0;
}

