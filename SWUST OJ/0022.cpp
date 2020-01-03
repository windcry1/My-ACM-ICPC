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
	double x1,y1,z1,x2,y2,z2,a[1001],b[1001],c[1001],x,y,z,dis[1001];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2) ;
		x=(x1+x2)/2;
		y=(y1+y2)/2;
		z=(z1+z2)/2;
		for(int i=0;i<n;i++)
		{
			dis[i]=sqrt((x-a[i])*(x-a[i])+(y-b[i])*(y-b[i])+(z-c[i])*(z-c[i]));
		}
		double re=99999;
		int temp;
		for(int i=0;i<n;i++)
		{
			if(re>dis[i])
			{
				re=dis[i];
				temp=i;
			}
		}
		printf("%.3lf %.3lf %.3lf\n",a[temp],b[temp],c[temp]);
	}
	return 0;
}

