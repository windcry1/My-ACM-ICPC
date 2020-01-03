//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int dir[6][3]={{0,0,1},{0,0,-1},{0,1,0},{0,-1,0},{1,0,0},{-1,0,0}}; 
char ma[32][32][32];
bool vis[32][32][32];
int a,b,c;
struct node{
	int x,y,z,step;
};
bool bfs(int startx,int starty,int startz,int endx,int endy,int endz)
{
	queue<node> q;
	vis[startx][starty][startz]=true;
	node t;
	t.x=startx;t.y=starty;t.z=startz;t.step=0;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==endx&&t.y==endy&&t.z==endz)
		{
			cout<<"Escaped in "<<t.step<<" minute(s)."<<endl;
			return true;
		}
		for(int i=0;i<6;i++)
		{
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1],dz=t.z+dir[i][2];
			if(dx<0||dy<0||dz<0||dx>=a||dy>=b||dz>=c||ma[dx][dy][dz]=='#'||vis[dx][dy][dz])
				continue;
			vis[dx][dy][dz]=true;
			node temp;
			temp.x=dx;temp.y=dy;temp.z=dz;temp.step=t.step+1;
			q.push(temp);
		}
	}
	return false;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>a>>b>>c&&a&&b&&c)
	{
		memset(vis,false,sizeof(vis));
		int startx,starty,startz,endx,endy,endz;
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				for(int k=0;k<c;k++)
				{
					cin>>ma[i][j][k];
					if(ma[i][j][k]=='S')
					{
						startx=i;
						starty=j;
						startz=k;
					}
					if(ma[i][j][k]=='E')
					{
						endx=i;
						endy=j;
						endz=k;
					}
				}
		if(!bfs(startx,starty,startz,endx,endy,endz))
			cout<<"Trapped!"<<endl;
	}
 	return 0;
}

