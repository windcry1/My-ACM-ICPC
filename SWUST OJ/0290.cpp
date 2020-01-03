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
int a[11],m,k;
int f(int x)
{
	int num=0;
	if(x<10)
		return x;
	if(x>=10)
	{
		for(int i=0;i<10;i++)
		{
			num+=a[i]*f(x-i-1);
			num%=m;
		}
	}
	return num;
}
int main()
{
	while(scanf("%d%d",&k,&m)!=EOF)
	{
		for(int i=0;i<10;i++)
			scanf("%d",&a[i]);
		printf("%d\n",f(k)%m);
	}
	return 0;
}

