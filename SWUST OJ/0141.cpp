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
int a[10000001],b[10000001];
int main()
{
	int T,n,m;
	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			scanf("%d%d",&n,&m);
			for(int i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(int i=0;i<m;i++)
				scanf("%d",&b[i]);
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(a[i]==b[j])
						a[i]=MMAX;
				}
			}
			sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				if(a[i]==MMAX)
					continue;
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}

