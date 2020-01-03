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
#include<map>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[1001][1001];
int vis[1001];
char c[1001];
vector<int> ve;
map<char,int> ma;
void bfs(int x,int n)
{
	queue<int> q;
	q.push(x);
	vis[x]=1;
	ve.push_back(x);
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		for(map<char,int>::iterator i=ma.begin();i!=ma.end();i++)
			if(a[t][i->second]&&!vis[i->second])
			{
				vis[i->second]=1;
				ve.push_back(i->second);
				q.push(i->second);
			}
	}
}
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	char t;
	cin>>n;
	memset(vis,0,sizeof(vis));
	memset(a,0,sizeof(a));
	ve.clear();
	cin.ignore();
	for(int i=0;i<n;i++)
		cin>>c[i],ma.insert(make_pair(c[i],i));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	cin>>t;
	for(int i=0;i<n;i++)
		if(c[i]==t)
		{
			bfs(i,n);
			break;
		}
	for(int i=0;i<ve.size();i++)
		cout<<c[ve[i]];
 	return 0;
}

