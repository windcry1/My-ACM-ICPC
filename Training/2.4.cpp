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
	int x,y,step;
};
queue<node> q;
int dir[8][2]={{-2,-1},{-1,-2},{-2,1},{-1,2},{1,2},{1,-2},{2,-1},{2,1}};//马所能够跳的八个方向记录下来 
int vis[8][8];
char temp[3][3];//定义一个字符串用于输入 
int change(char c)//字符转数字 
{
	switch (c) 
	{
		case 'a':return 0;
			break;
		case 'b':return 1;
			break;
		case 'c':return 2;
			break;
		case 'd':return 3;
			break;
		case 'e':return 4;
			break;
		case 'f':return 5;
			break;
		case 'g':return 6;
			break;
		case 'h':return 7;
			break;
		case '1':return 0;
			break;
		case '2':return 1;
			break;
		case '3':return 2;
			break;
		case '4':return 3;
			break;
		case '5':return 4;
			break;
		case '6':return 5;
			break;
		case '7':return 6;
			break;
		case '8':return 7;
			break;
	}
}
int bfs(int x,int y,int x1,int y1)
{
	while(!q.empty())//队列的初始化，全部清空 
		q.pop();
	int i;
	q.push(node{x,y,0});
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==x1&&t.y==y1)
			return t.step;
		for(i=0;i<8;i++)
		{
			int dx=t.x+dir[i][0];
			int dy=t.y+dir[i][1];
			if(dx>=0&&dy>=0&&dx<8&&dy<8&&!vis[dx][dy])//基本搜索 
			{
				vis[dx][dy]=1;
				q.push(node{dx,dy,t.step+1});
			}
		}
	}
	return 0;
}
int main()
{
	while(scanf("%s%s",temp[0],temp[1])!=EOF)
	{
		memset(vis,0,sizeof(vis));
		int x=change(temp[0][0]);
		int y=change(temp[0][1]);
		int x1=change(temp[1][0]);
		int y1=change(temp[1][1]);//确定首尾点 
		int ans=bfs(x,y,x1,y1);
		printf("To get from %s to %s takes %d knight moves.\n",temp[0],temp[1],ans);//输出 
	}
	return 0;
}

