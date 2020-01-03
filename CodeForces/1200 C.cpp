/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 9:00:35 PM
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
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,m,q;cin>>n>>m>>q;
	ll gcd=__gcd(n,m);
	ll tn=n/gcd,tm=m/gcd;
	while(q--)
	{
		ll tag1,tag2,x1,x2;
		cin>>tag1>>x1>>tag2>>x2;
		--x1,--x2;
		if(tag1==1) x1/=tn;
		else x1/=tm;
		if(tag2==1) x2/=tn;
		else x2/=tm;
		cout<<(x1==x2?"YES":"NO")<<endl;
	}
	return 0;
}

