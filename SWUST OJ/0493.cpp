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
int a[20001],b[20001];
int main()
{
	int n,sum1,sum2;
	scanf("%d",&n);
	sum1=0;sum2=0;
	for(int i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		sum1+=abs(a[i]-a[n/2]);
		sum2+=abs(b[i]-b[n/2]);
	}
	printf("%d\n",sum1+sum2);
	return 0;
}

