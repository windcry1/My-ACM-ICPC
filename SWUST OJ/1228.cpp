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
int a[1000001],b[1000001];
int main()
{
	int n,l,r;
	while(scanf("%d",&n)!=EOF)
	{
		l=0;r=-1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			if(b[i]!=a[i])
			{
				l=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(b[i]!=a[i])
			{
				r=i;
				break;
			}
		}
		printf("%d\r\n",r-l+1);
	}
	
	return 0;
}

