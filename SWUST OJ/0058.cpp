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
	int n,a,b,x,y,r,s;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			x=0;y=0;s=0;
			scanf("%d%d",&a,&b);
			while(a!=0)
			{
				x*=10;
				x+=a%10;
				a/=10; 
			}
			while(b!=0)
			{
				y*=10;
				y+=b%10;
				b/=10; 
			}
			r=x+y;
			while(r!=0)
			{
				s*=10;
				s+=r%10;
				r/=10;
			}
			printf("%d\n",s);
		}
	}
	
	return 0;
}

