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
	int n,book[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d,h,m,month;
	while(scanf("%d",&n)!=EOF)
	{
		d=1;h=0;m=0;month=1;
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
		while(d>book[month-1])
		{
			d-=book[month-1];
			month++;
		}
		printf("2009-%02d-%02d %02d:%02d:%02d\n",month,d,h,m,n);
	}
	return 0;
}

