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
	int t,n;
	double a[1001],b[1001],MIN;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			MIN=MMAX;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
				scanf("%lf%lf",&a[i],&b[i]);
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))<MIN)
						MIN=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
				}
			}
			printf("%.4lf\n",MIN);
		}
	}
	return 0;
}

