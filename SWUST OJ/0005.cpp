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
int gcd(int a,int b)
{
	while(b!=0)
	{
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
 
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if ((m/gcd(m,n))%2==0)
			printf("B\n");
		else
			printf("A\n");
	}
	return 0;
}


