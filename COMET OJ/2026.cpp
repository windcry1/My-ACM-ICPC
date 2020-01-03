//Author:LanceYu
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
ll f(ll x)
{
	ll cnt=0;
	while(x!=0)
	{
		cnt+=x%10;
		x/=10;
	}
	return cnt;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n;
	cin>>n;
	while(n--)
	{
		ll q;
		cin>>q;
		ll cnt=0;
		if(q%18==0)cnt++;
		if(q%17==0)cnt++;
		cout<<cnt<<endl;
	}
 	return 0;
}

