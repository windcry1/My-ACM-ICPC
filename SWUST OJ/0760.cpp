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
	int n,d,h,m;
	while(scanf("%d",&n)!=EOF)
	{
		d=0;h=0;m=0;
		while(n>=86400)
		{
			n-=86400;
			d++;
		}
		while(n>=3600)
		{
			n-=3600;
			h++;
		}
		while(n>=60)
		{
			n-=60;
			m++;
		}
		printf("%d days %d hours %d minutes %d seconds\n",d,h,m,n);
	}
	return 0;
}

