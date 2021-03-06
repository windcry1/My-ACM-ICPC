//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
int a[1010],b[1010];
bool vis[1010];
int n,m;
bool bfs(int x,int y)
{
	vis[x]=true;
	queue<int> q;
	q.push(x);
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		if(t==y)
			return true;
		if(a[t])
		{
			for(int i=t+1;i<=n;i++)
			{
				if(!vis[i]&&a[i])
				{
					vis[i]=true;
					q.push(i);
				}
			}
		}
		if(b[t])
		{
			for(int i=1;i<t;i++)
			{
				if(!vis[i]&&b[i])
				{
					vis[i]=true;
					q.push(i);
				}
			}
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
	while(cin>>n>>m)
	{
		memset(vis,false,sizeof(vis));
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			cin>>b[i];
		//bfs(1,m);
		cout<<(bfs(1,m)?"YES":"NO")<<endl;
	}
 	return 0;
}

