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
	ll n,a,b,c;
	while(scanf("%llo",&n)!=EOF)
	{
		a=0;b=0;c=0;
		while(n!=0)
		{
	 		if(n%16==10)
	 			a++;
	 		if(n%16==11)
	 			b++;
	 		if(n%16==12)
	 			c++;
	 		n/=16;
		}
		printf("%lld %lld %lld\r\n",a,b,c);
	}
	return 0;
}

