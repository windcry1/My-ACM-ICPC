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
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
ll exgcd(ll a,ll b,ll &x,ll &y)
{
	if(!b)
	{
		x=1;y=0;
		return a;
	}
	ll gcd = exgcd(b,a%b,x,y);
	ll t=x;
	x=y;
	y=t-a/b*y;
	return gcd;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll x,y,n,m,b;
	while(cin>>x>>y>>m>>n>>b)
	{
		ll a=m-n,c=y-x;
		if(a<0)
		{
			a=-a;
			c=-c;
		}
		ll gcd = exgcd(a,b,x,y);
		if(c%gcd)
			cout<<"Impossible"<<endl;
		else
		{
			x=x*c/gcd;
			x=(x%(b/gcd)+b/gcd)%(b/gcd);
			cout<<x<<endl;
		}
	}
 	return 0;
}

