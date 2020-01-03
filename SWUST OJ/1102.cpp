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
	int n,a[1001];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int num=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]<a[0])
			{
				printf("%d ",a[i]);
				num++;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>=a[0]&&num<n-1)
			{
				printf("%d ",a[i]);
				num++;
			}
			else if(a[i]>=a[0]&&num==n-1)
			{
				printf("%d\n",a[i]);
				num++;
			}
		}
	}
	return 0;
}

