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
	int f,x,y,step;
};
queue<node> q;
int vis[2][11][11];
char map[2][11][11];
int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
int n,l,m,times,flag;
int bfs(int f,int x,int y,int a,int b,int c)
{
	while(!q.empty())
		q.pop();//��ʼ����Ϊ�˶���������׼�� 
	int i;
	vis[f][x][y]=1;
	q.push(node{f,x,y,0});
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.step>times)
			return 0;
		if(t.f==a&&t.x==b&&t.y==c)//�����յ㷵�ز��� 
			return t.step;
		for(i=0;i<4;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			flag=t.f;
			if(dx>=0&&dy>=0&&dx<l&&dy<m&&(map[flag][dx][dy]=='.'||map[flag][dx][dy]=='P')&&!vis[flag][dx][dy])//��һ���������Ļ��ߵ����յ� 
			{
				vis[flag][dx][dy]=1;//�߹���
				q.push(node{flag,dx,dy,t.step+1});
			}
			if(dx>=0&&dy>=0&&dx<l&&dy<m&&map[flag][dx][dy]=='#'&&(map[1-flag][dx][dy]=='.'||map[1-flag][dx][dy]=='P')&&!vis[flag][dx][dy])//��һ���Ǵ����ţ�����һ�㲻��ǽ���Ҳ��Ǵ����� 
			{
				vis[flag][dx][dy]=1;//����߹� 
				flag=1-flag;//ת������һ��or��һ�� 
				q.push(node{flag,dx,dy,t.step+1});//����һ������queue
				vis[flag][dx][dy]=1;//��һ��������Ҳ�߹�
			}
		}
	}
	return 0;
}
int main()
{
	int a,b,c;
	cin>>n;
	while(n--)
	{
		memset(vis,0,sizeof(vis));
		cin>>l>>m>>times;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<l;j++)
			{
				scanf("%s",map[i][j]);//�����ͼ 
				for(int k=0;k<m;k++)
				{
					if(map[i][j][k]=='P')
					{
						a=i;
						b=j;
						c=k;
					}
				}
			}	
		}
		int ans=bfs(0,0,0,a,b,c);
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

