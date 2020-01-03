/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/28/2019 6:36:51 PM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,t;
	cin>>n>>t;
	vector<pair<ll,ll> > v;
	ll temp;
	for(ll i=1;i<=n;i++)
	{
		cin>>temp;
		v.emplace_back(temp,i);
	}
	while(t--)
	{
		ll MAX=v.begin()->first;
		auto ite=v.begin();
		for(auto i=v.begin();i!=v.end();i++)
			if(i->first>MAX)
				ite=i,MAX=i->first; 
		pair<ll,ll> pii=*ite;
		//v.erase(ite);
		ite->first=0;
		ll p=pii.first/(n-1);
		ll q=pii.first%(n-1);
		for(auto &i:v)
			if(i.second!=ite->second)
				i.first+=p;
		for(auto &i:v)
			if(i.second!=ite->second)
			{
				if(!q) break;
				i.first++;
				q--;
			}
		cout<<pii.second<<endl;
	}
	return 0;
}

