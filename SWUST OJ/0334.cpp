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
	int n,x,a[101],b[101],r1,r2;
	while(scanf("%d|%d",&n,&x)!=EOF)
	{
		r1=0;r2=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int i=0;
		while(n)
		{
			a[i++]=n%10;
			n/=10;
		}
		int j=0;
		while(x)
		{
			b[j++]=x%10;
			x/=10;
		}
		sort(a,a+i);
		sort(b,b+j);
		for(int k=0;k<i;k++)
		{
			r1*=10;
			r1+=a[k];
		}
		for(int k=0;k<j;k++)
		{
			r2*=10;
			r2+=b[k];
		}
		printf("%d\n",r1+r2);
	}
	return 0;
}

