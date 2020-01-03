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
const int mod=23333333;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int a[100001];
int main()
{
	int n;
	a[0]=1;a[1]=2;a[2]=4;
	for(int i=3;i<=100000;i++)
		a[i]=(a[i-1]+a[i-2]+a[i-3])%mod;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",a[n-1]);
	}
	return 0;
}

