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
int vis[100001];
struct node
{
	int x,step;
};
int bfs(int n,int k)
{
	queue<node> q;
	vis[n]=1;
	q.push(node{n,0});
	while(!q.empty())
	{
		node t=q.front();
		if(t.x==k)
			return t.step;
		q.pop();
		if(t.x-1>=0&&t.x-1<100001&&!vis[t.x-1])
		{
			vis[t.x-1]=1;
			q.push(node{t.x-1,t.step+1});
		}
		if(t.x+1>=0&&t.x+1<100001&&!vis[t.x+1])
		{
			vis[t.x+1]=1;
			q.push(node{t.x+1,t.step+1});
		}
		if(2*t.x>=0&&2*t.x<100001&&!vis[2*t.x])
		{
			vis[t.x*2]=1;
			q.push(node{t.x*2,t.step+1});
		}
	}
	return -1;
}

int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		memset(vis,0,sizeof(vis));
		int ans=bfs(n,k);
		cout<<ans<<endl;
	}
	return 0;
}

