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
	double d,x,y,t,sum1,sum2;
	while(scanf("%lf%lf%lf%lf",&d,&x,&y,&t)!=EOF)
	{
		sum1=t+d/x;
		sum2=d/y;
		if(sum1<sum2)
			printf("YES\r\n");
		else
			printf("NO\r\n");
	}
	return 0;
}

