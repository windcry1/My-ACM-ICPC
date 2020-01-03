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
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int main()
{
	ll n,sum,t;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0)
			break; 
		sum=0;
		t=n/30;
		for(ll i=t*30+1;i<=n;i++)
		{
			if(i%2==0||i%3==0||i%5==0)
				sum+=i; 
		}
		for(int i=1;i<=30;i++)
		{
			if(i%2==0||i%3==0||i%5==0)
				sum+=t*i+t*(t-1)*15;
		}
		printf("%lld\n",sum);
	}
	return 0;
}

