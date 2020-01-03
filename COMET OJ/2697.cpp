/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/30/2019 6:01:59 PM
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
pair<ll,ll> a[100010],b[100010],c[100010],d[100010],e[100010];
bool vis[100010];
vector<pair<ll,ll>> v[5];
ll MAX;
void dfs(int x,ll val)
{
	if(x==5)
	{
		if(val>MAX) MAX=val;
		return ;
	}
	for(auto i:v[x])
		if(!vis[i.second])
		{
			vis[i.second]=true;
			dfs(x+1,val+i.first);
			vis[i.second]=false;
		}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first>>b[i].first>>c[i].first>>d[i].first>>e[i].first;
		a[i].second=i,b[i].second=i,c[i].second=i,d[i].second=i,e[i].second=i;
	}
	sort(a,a+n,greater<pair<int,int>>());
	sort(b,b+n,greater<pair<int,int>>());
	sort(c,c+n,greater<pair<int,int>>());
	sort(d,d+n,greater<pair<int,int>>());
	sort(e,e+n,greater<pair<int,int>>());
	for(int j=0;j<5;j++)
		v[0].push_back(a[j]);
	for(int j=0;j<5;j++)
		v[1].push_back(b[j]);
	for(int j=0;j<5;j++)
		v[2].push_back(c[j]);
	for(int j=0;j<5;j++)
		v[3].push_back(d[j]);
	for(int j=0;j<5;j++)
		v[4].push_back(e[j]);
	dfs(0,0);
	cout<<MAX<<endl;
	return 0;
}

