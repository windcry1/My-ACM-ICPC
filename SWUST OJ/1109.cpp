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
int a[10001];
int main()
{
	int n,count=0,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=n-1;i>=0;i--)
	{
		int Max=-MMAX;
		for(int j=0;j<=i;j++)
		{
			if(Max<a[j])
			{
				Max=a[j];
				t=j;
			}
		}
		if(t!=i)
		{
			count++;
			swap(a[t],a[i]);
		}
	}
	printf("%d\n",count);
	return 0;
}

