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
const double PI=3.141592653589793;
const int MMAX=2147483647;
bool vis[100001];
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
			vis[t.x-1]=true;
			q.push(node{t.x-1,t.step+1});
		}
		if(t.x+1>=0&&t.x+1<100001&&!vis[t.x+1])
		{
			vis[t.x+1]=true;
			q.push(node{t.x+1,t.step+1});
		}
		if(2*t.x>=0&&2*t.x<100001&&!vis[2*t.x])
		{
			vis[t.x*2]=true;
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
		memset(vis,false,sizeof(vis));
		cout<<bfs(n,k)<<endl;
	}
	return 0;
}
