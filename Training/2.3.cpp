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
struct node
{
	int x,y,z,step;
};
char str[11];
int n,vis[101][101][101];
char map[101][101][101];
int dir[6][3]={{-1,0,0},{1,0,0},{0,-1,0},{0,1,0},{0,0,-1},{0,0,1}};//六个自由度，三个方向 
int bfs(int a,int b,int c,int x,int y,int z)
{
	int i;
	queue<node> q;
	q.push(node{a,b,c,0});
	vis[a][b][c]=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x&&t.y==y&&t.z==z)
			return t.step;
		for(i=0;i<6;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			int dz=t.z+dir[i][2];
			if(dx>=0&&dy>=0&&dz>=0&&dx<n&&dy<n&&dz<n&&!vis[dx][dy][dz]&&map[dx][dy][dz]=='O')//三维bfs 
			{
				vis[dx][dy][dz]=1;
				q.push(node{dx,dy,dz,t.step+1});
			}
		}
	}
	return -1;
}
int main()
{
	int a,b,c,x,y,z;
	while(scanf("%s%d",str,&n)!=EOF)//吸收掉start 
	{
		getchar();
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++) 
					cin>>map[k][j][i];//输入map的时候直接按照需求输入 
			}
		}
		scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);//输入起点和终点 
		scanf("%s",str);//同理，吸收掉end 
		int ans=bfs(a,b,c,x,y,z); 
		if(ans==-1)
			printf("NO ROUTE\n");
		else
			printf("%d %d\n",n,ans);
	}
	return 0;
}

