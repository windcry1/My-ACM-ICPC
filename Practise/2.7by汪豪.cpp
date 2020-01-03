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
#define FOR(i,n) for(i=0;i<n;i++)
int vis[2][50][50], l, m,_limit;
char _map[2][50][50];
int dir[4][2] = { 0,1,0,-1,1,0,-1,0 };
struct node { int _level, x, y, step; };
queue<node> q;
node _now,_new;
bool judge()
{
	int _level = _new._level, x = _new.x, y = _new.y;
	//越界或者被访问过
	if (x < 0 || y < 0 || x >= l || y >= m || vis[_level][x][y]) return 0;
	//撞墙
	if (_map[_level][x][y] == '*') return 0;
	//两边都是传送门
	if (_map[_level][x][y] == '#' && _map[1-_level][x][y] == '#') return 0;
	//这边是传送门， 宁一边是墙
	if (_map[_level][x][y]  == '#' && _map[1-_level][x][y] == '*') return 0;
	//过滤了之后，则合法
	return 1;
}
int bfs(int f,int x,int y,int a,int b,int c)
{
	int i;
	vis[f][x][y] = 1;
	while (!q.empty()) q.pop();//初始化
	q.push(node{ f,x,y,0 });
	
	while(!q.empty())
	{
		 _now = q.front();
		q.pop();
		if (_now.step > _limit)
			return -1;
		if (_now._level==a&&_now.x==b&&_now.y==c)
			return _now.step;	//找到出口
		FOR(i,4)
		{
			_new.x = dir[i][0] + _now.x;
			_new.y = dir[i][1] + _now.y;
			_new._level = _now._level;
			if(judge())
			{
				//遇到传送门,标记传送前的位置,传送.
				if (_map[_new._level][_new.x][_new.y] == '#') 
				{ 
					vis[_new._level][_new.x][_new.y] = 1;
					_new._level = 1-_new._level; 
				}
				vis[_new._level][_new.x][_new.y] = 1;
				_new.step = _now.step+1;
				q.push(_new);
			}
		}
	}
	return -1;
}
int main()
{
	int i, j, k, b,c;
	cin >> c;
	while(c--)
	{
		int a,b,c;
		cin >> l >> m >> _limit;
		memset(vis, 0, sizeof vis);
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<l;j++)
			{
				scanf("%s",_map[i][j]);//输入地图 
				for(int k=0;k<m;k++)
				{
					if(_map[i][j][k]=='P')
					{
						a=i;
						b=j;
						c=k;
					}
				}
			}	
		}
		// i 控制层数， j控制一行的数据
		int ans = bfs(0,0,0,a,b,c);
		printf("%d\n",ans);
		printf("%s\n", ans != -1 ? "YES" : "NO");
	}
	return 0;
}
