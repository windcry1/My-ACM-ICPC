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
	int a[1001],b[1001],n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		b[0]=(a[0]+a[1])/2;
		b[n-1]=(a[n-1]+a[n-2])/2;
		for(int j=1;j<n-1;j++)
		{
			b[j]=(a[j-1]+a[j]+a[j+1])/3;
		}
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				printf("%d ",b[i]);
			else printf("%d",b[i]);
		}
		printf("\n");
	}

	return 0;
}

