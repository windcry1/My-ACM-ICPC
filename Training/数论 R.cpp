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
vector<ll> v;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		v.clear();
		ll x,y,k;
		cin>>x>>y>>k;
		ll gc=__gcd(x,y);
		if(k==1)
		{
			cout<<gc<<endl;
			continue;
		}
		if(gc!=1)
			v.push_back(1);
		for(ll i=2;i<=sqrt(gc);i++)
		{
			if(gc%i==0)
			{
				if(gc!=i*i)
					v.push_back(i);
				v.push_back(gc/i);
			}
		}
		sort(v.begin(),v.end(),greater<ll>());
		if(k-1>v.size())
			cout<<-1<<endl;
		else cout<<v[k-2]<<endl;
	}
 	return 0;
}

