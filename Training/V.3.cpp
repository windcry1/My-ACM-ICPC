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
const ll x=1e9+7;
ll t,a[100007],n,m,temp,sum,left;
int main()
{
	while(scanf("%lld",&t)!=EOF)
	{
		memset(a,0,sizeof(a));
		while(t--)
		{
			scanf("%lld%lld",&n,&m);
			if(m*(m+1)/2>n)
			{
				printf("-1\n");
				continue; 
			}
			else
			{
				temp=(n-m*(m+1)/2)/m;
				for(int i=0;i<m;i++)
					a[i]=i+1+temp;
				ll left=(n-m*(m+1)/2)-(n-m*(m+1)/2)/m*m;
				while(left)
				{
					for(int i=0;i<m;i++)
					{
						a[m-1-i]++;
						left--;
						if(!left)
							break;
					}
				}
				sum=1;
				for(int i=0;i<m;i++)
				{
					sum*=a[i];
					sum%=x;
				}
				printf("%lld\n",sum);				
			}
		}
	}
	return 0;
}

