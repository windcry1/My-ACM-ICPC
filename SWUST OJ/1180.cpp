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
const double clf=1e-4;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	double x[3],y[3],z[3];
	double a,b,c;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&z[0],&x[1],&y[1],&z[1],&x[2],&y[2],&z[2])!=EOF)
	{
		a=(x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1])+(z[0]-z[1])*(z[0]-z[1]);
		b=(x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2])+(z[0]-z[2])*(z[0]-z[2]);
		c=(x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1])+(z[2]-z[1])*(z[2]-z[1]);
		if(c<b)
			swap(b,c);
		if(c<a)
			swap(a,c);
		if(sqrt(a)+sqrt(b)<=sqrt(c))
			printf("None\n");
		else
		{
			if(a+b==c)
				printf("Middle\n");
			else if(a+b>c)
				printf("Small\n");
			else if(a+b<c)
				printf("Big\n");
		}
	}
	
	return 0;
}

