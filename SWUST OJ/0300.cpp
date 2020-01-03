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
int hashp[1000001],hashn[1000001];
int main()
{
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		memset(hashp,0,sizeof(hashp));
		memset(hashn,0,sizeof(hashn));
		if(a>0&&b>0&&c>0&&d>0||a<0&&b<0&&c<0&&d<0)
		{
			printf("0\n");
			continue;
		}
		ll num=0;
		for(int i=1;i<=100;i++)
		{
			for(int j=1;j<=100;j++)
			{
				if(a*i*i+b*j*j>=0)
					hashp[a*i*i+b*j*j]++;
				else
					hashn[-a*i*i-b*j*j]++;
			}
		}
		for(int i=1;i<=100;i++)
		{
			for(int j=1;j<=100;j++)
			{
				if(c*i*i+d*j*j>0)
					num+=hashn[c*i*i+d*j*j];
				else
					num+=hashp[-c*i*i-d*j*j];
			}
		}
		printf("%lld\n",num*16);
	}
	
	return 0;
}

