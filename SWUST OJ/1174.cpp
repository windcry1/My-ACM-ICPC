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
bool isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(!(n%i))
			return false;
	}
	return true;
}
int main()
{	
	int x,t;
	for(int i=100;i<=999;i++)
	{
		t=i;x=0;
		while(t)
		{
			x*=10;
			x+=t%10;
			t/=10;
		}
		if(isprime(x)&&isprime(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

