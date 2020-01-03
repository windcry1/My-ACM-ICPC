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

int main()
{
	int n,T,a[301],b[301],sum;
	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			sum=0;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
				scanf("%d",&a[i]);
			sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				for(int j=i;j<n;j++)
				{
					if(a[i]<a[j])
						sum++;
				}
			}
			double l=n*(n-1);
			printf("%.6lf\n",sum/l);
		}
	}
	
	return 0;
}

