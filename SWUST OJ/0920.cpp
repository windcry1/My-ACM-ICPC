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
	int n;
	double a[1001],b[1001],x,y,z;
	while(scanf("%d",&n)!=EOF) 
	{
		x=0;y=0;z=0;
		for(int i=0;i<n;i++)
			scanf("%lf",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%lf",&b[i]);
		for(int i=0;i<n;i++)
			x+=a[i]*a[i];
		for(int i=0;i<n;i++)
			y+=b[i]*b[i];
		for(int i=0;i<n;i++)
			z+=(a[i]-b[i])*(a[i]-b[i]);
		x=sqrt(x);y=sqrt(y);z=sqrt(z); 
		printf("%.4lf\n",(x*x+y*y-z*z)/(2*x*y));
	}
	return 0;
}

