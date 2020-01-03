/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/30/2019 11:08:23 PM
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
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
map<ll,ll> ma;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,I;
	cin>>n>>I;
	I*=8;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		++ma[tmp];
	}
	ll k=I/n;
	ll K;
	if(k>=20)
	{
		cout<<0<<endl;
		return 0;
	}
	else K=pow(2,k);
	ll res=0;
	ll t=ma.size();//how many different numbers
	if(t<=K)
	{
		cout<<0<<endl;
		return 0;
	}
	auto i=ma.begin();
	auto j=ma.rbegin();
	while(true)
	{
		res+=i->second;
		t--;
		if(t<=K)
		{
			break;
		}
		i++;
	}
	ll MIN=res;
	while(true)
	{
		res+=j->second;
		res-=i->second;
		MIN=min(res,MIN);
		if(i==ma.begin())
			break;
		i--;
		j++;
	}
	cout<<MIN<<endl;
	return 0;
}

