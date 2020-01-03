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
	int n,t,a[1001];
	a[1]=1;a[2]=1;a[3]=2;a[4]=3;
	for(int i=5;i<=40;i++)
		a[i]=a[i-1]+a[i-2];
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%d",&t);
			printf("%d\n",a[t]);
		}
	}
	
	return 0;
}

