/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 12:04:08 PM
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
ll a[10100],b[10010];
int main()
{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,m;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		set<ll> st(a,a+n);
		ll mul=1;
		for(auto i:st)
			mul*=i;
		b[0]=mul/a[0];
		ll gc=b[0];
		for(int i=1;i<n;i++)
		{
			b[i]=mul/a[i];
			gc=__gcd(gc,b[i]);
		}
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			b[i]/=gc;
			sum+=b[i];
		}
		if(m%sum!=0)
		{
			cout<<"No"<<endl;
			continue;
		}
		cout<<"Yes"<<endl;
		for(int i=0;i<n;i++)
		{
			if(!i)
				cout<<b[i]*m/sum;
			else
				cout<<" "<<b[i]*m/sum;
		}
		cout<<endl;
	}
 	return 0;
}

