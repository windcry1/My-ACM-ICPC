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
	ll n,i,sum,flag;
	while(scanf("%lld",&n)!=EOF)
	{
		i=2,sum=1,flag=0;
		while(n!=1)
		{
			if(!(n%i))
			{
				n/=i;
				if(!flag)
					sum*=i;
				flag=1;
			}
			else if(n%i)
			{
				i++;
				flag=0;
			}
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}

