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
ll a[300001];
int main()
{
	ll i,m,n,sum,num;
	
	while(scanf("%lld%lld",&n,&m)!=EOF)
	{
		sum=0;num=0;i=0;
		memset(a,0,sizeof(a));
		while(num!=n)
		{
			if(!a[i])
				sum++;
			if(sum==m)
			{
				sum=0;
				a[i]=1;
				num++;
			}
			i++;
			i%=n;
		}
		printf("%lld\n",i);
	}
	
	return 0;
}

