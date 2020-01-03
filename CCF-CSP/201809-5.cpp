//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
ll a[10000001],k[10000001];
int main()
{
	ll m,l,r;
	while(scanf("%lld%lld%lld",&m,&l,&r)!=EOF)
	{
		memset(a,0,sizeof(a));
		a[0]=1;
		for(ll i=0;i<m;i++)
		{ 
			scanf("%lld",&k[i]);
			k[i]%=998244353;
		}
		for(ll i=1;i<=r;i++)
		{
			if(i<m)
			{
				for(ll j=0;j<i;j++)
				{ 
					a[i]+=k[j]*a[i-j-1];
					a[i]%=998244353;
				} 
			}
			else
			{
				for(ll j=0;j<m;j++)
				{
					a[i]+=k[j]*a[i-j-1];
					a[i]%=998244353;
				}
			}
		}
		for(ll i=l;i<=r;i++)
			printf("%lld\n",a[i]);
	}
	return 0;
}

