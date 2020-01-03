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

int main()
{
	int m,n,t,a[1001];
	
	int sum,num; 
	while(cin>>m>>n>>t)
	{
		if(m==0&&n==0&&t==0)
			return 0;
		memset(a,0,sizeof(a));
		sum=0;num=0;
		for(int i=n-1;;i++)
		{
			if(num==m)
				break;
			if(a[i%m]==1)
				continue;
			else
			{
				if(sum==t-1)
				{
					sum=0;
					a[i%m]=1;
					num++;
					if(num!=m)
						printf("%d,",i%m+1);
					if(num==m)
						printf("%d\n",i%m+1);
				}
				else if(sum<t-1)
					sum++;
			}
		}
	}
	
	return 0;
}

