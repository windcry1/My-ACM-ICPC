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
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,a[101],b[101],c[101];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int j=0,k=0;
		for(int i=1;i<n;i++)
		{
			if(i%2)
				b[j++]=a[i];
			else
				c[k++]=a[i];
		}
		sort(b,b+j,cmp);
		sort(c,c+k);
		for(int i=0;i<j;i++)
			printf("%d ",b[i]);
		for(int i=0;i<k;i++)
		{
			if(i!=k-1)
				printf("%d ",c[i]);
			else
				printf("%d\n",c[i]);
		}
	}
	return 0;
}

