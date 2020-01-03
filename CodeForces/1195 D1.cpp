/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/18/2019 8:37:47 AM
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
const ll mod=998244353;
const int MAX_N = 1e5+10;
inline ll getsum(int n)
{
	ll res=0;
	ll temp=1;
	while(n)
	{
		res+=(n%10)*temp;
		res%=mod;
		n/=10;
		temp*=100;
	}
	return res*11;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;
	cin>>n;
	ll res=0;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		res+=getsum(t)*n;
		res%=mod;
	}
	cout<<res<<endl;
 	return 0;
}

