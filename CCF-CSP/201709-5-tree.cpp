/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 8:40:51 PM
*************************************************************************/
#pragma GCC optimize (2)
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
const int MAX_N=1e5+10;
ll tree[MAX_N],a[MAX_N];
int n,m;
inline ll lowbit(ll x)
{
	return x&(-x);
}
inline void edit(int x,int v)
{
	for(int j=x;j<=n;j+=lowbit(j))
		tree[j]+=v;
}
inline ll sum(int k)
{
	ll ans=0;
	for(int i=k;i>0;i-=lowbit(i))
		ans+=tree[i];
	return ans;
}
inline ll get_ans(int l,int r)
{
	return sum(r)-sum(l-1);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],edit(i,a[i]);
	while(m--)
	{
		int t,r,l;cin>>t;
		if(t==2)
		{
			cin>>l>>r;
			cout<<get_ans(l,r)<<endl;
		}
		else
		{
			int v;
			cin>>l>>r>>v;
			if(v==1) continue;
			while(l<=r)
			{
				if(a[l]>=v&&a[l]%v==0)
					edit(l,(-a[l]+a[l]/v)),a[l]/=v;
				++l;
			}
		}
	}
 	return 0;
}

