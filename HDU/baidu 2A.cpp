/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/18/2019 6:04:06 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<int> v;
int cal(int n)
{
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return res;
}
int print(int n)
{
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n!=i*i)
				v.push_back(n/i);
			v.push_back(i);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		v.clear();
		int V;cin>>V;
		int gcd=__gcd(cal(V),V);
		print(gcd);
		cout<<v.size()<<endl;
		bool f=false;
		sort(v.begin(),v.end());
		for(auto i:v)
			cout<<(f?" ":"")<<i,f=true;
		cout<<endl;
	}
	return 0;
}

