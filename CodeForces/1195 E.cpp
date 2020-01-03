/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/18/2019 12:21:08 AM
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
ll h[3010][3010],MIN[3010][3010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,m,a,b,g,x,y,z;
	cin>>n>>m>>a>>b>>g>>x>>y>>z;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			h[i][j]=g;
			g=(g*x+y)%z;
		}
	for(ll i=1;i<=n;i++)
	{
		priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > q;
		for(ll j=1;j<=m;j++)
		{
			q.push(make_pair(h[i][j],j));
			while(q.top().second<=j-b)
				q.pop();
			MIN[i][j]=q.top().first;
		}
	}
	ll ans=0;
	for(ll j=b;j<=m;j++)
	{
		priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > q;
		for(ll i=1;i<=n;i++)
		{
			q.push(make_pair(MIN[i][j],i));
			while(q.top().second<=i-a)
				q.pop();
			if(i>=a)
				ans+=q.top().first;
		}
	}
	cout<<ans<<endl;
 	return 0;
}

