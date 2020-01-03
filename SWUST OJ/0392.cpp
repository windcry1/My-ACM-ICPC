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
char a[101][101];
vector<int> v;
int n,m;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int change(string s)
{
	if(s=="NORTH")
		return 0;
	if(s=="WEST")
		return 2;
	if(s=="SOUTH")
		return 1;
	if(s=="EAST")
		return 3;
	return -1;
}
void dfs(int x,int y)
{
	if(x<0||y<0||x>=n||y>=m)
		return;
	if(a[x][y]=='X')
		return;
	if(v.size()==1)
	{
		a[x][y]='*';
	}
	int t=*v.begin();
	int flag=0;
	if(v.size()==1)
		flag=1;
	//vis[x+dir[v.front()][0]][y+dir[v.front()][1]]=1;
	dfs(x+dir[v.front()][0],y+dir[v.front()][1]);
	//vis[x+dir[v.front()][0]][y+dir[v.front()][1]]=0;
	if(!flag)
		v.erase(v.begin());
	//vis[x+dir[v.front()][0]][y+dir[v.front()][1]]=1;
	dfs(x+dir[v.front()][0],y+dir[v.front()][1]);
	//vis[x+dir[v.front()][0]][y+dir[v.front()][1]]=0;
	if(!flag)
		v.insert(v.begin(),t);
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int t;
	cin>>n>>m;
	int x,y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='*')
			{
				x=i;
				y=j;
				a[i][j]='.';
			}
		}
	}
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		int t=change(s);
		if(t!=-1)
			v.push_back(t);
	}
	dfs(x+dir[v.front()][0],y+dir[v.front()][1]);
	//dfs(x,y);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\r\n";
	}
 	return 0;
}
