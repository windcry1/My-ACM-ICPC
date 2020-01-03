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
	int n,m,a[1001],i,r;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		r=n*m;
		i=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n/=2;
				m*=2;
			}
			else
			{
				a[i++]=m;
				n/=2;
				m*=2;
			}
		}
		for(int j=0;j<i;j++)
		{
			printf("%d + ",a[j]);
		}
		printf("%d = ",m);
		printf("%d\n",r);
	}
	return 0;
}

