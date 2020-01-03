/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/27/2019 5:22:43 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
unordered_set<int> ma[100010];
set<int> st;
bool vis[100010];
int MAX=0,dian;
void bfs(int x)
{
	queue<pair<int,int> > q;
	vis[x]=true;
	q.emplace(x,0);
	while(!q.empty())
	{
		pair<int,int> t=q.front();
		q.pop();
		if(st.count(t.first)&&t.second>MAX) MAX=t.second,dian=t.first;
		for(auto i:ma[t.first])
			if(!vis[i])
				vis[i]=true,q.emplace(i,t.second+1);
	}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k,t;
	cin>>n>>k;
	int a,b; 
	for(int i=0;i<n-1;i++)
		cin>>a>>b,ma[a].insert(b),ma[b].insert(a);
	for(int i=0;i<k;i++)
		cin>>t,st.insert(t);
	bfs(*(st.begin()));
	memset(vis,0,sizeof(vis));
	MAX=0;
	bfs(dian);
	cout<<(MAX+1)/2<<endl;
 	return 0;
}

