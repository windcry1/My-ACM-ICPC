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
int main()
{
	int n,m;
	while(~scanf("%d %d",&n,&m))
	{
	int sum=0;
		while(n%2==0)
		{
			n=n/2;
			m=m*2;
			while(n%2!=0)
			{
				printf("%d +",m);
				sum=sum+m;
				n=n/2;
				m=m*2;
				if(n==0)
			{
				printf(" =%d",sum);
				}		
			}
				
			}
			
		}
		return 0;	
	}
