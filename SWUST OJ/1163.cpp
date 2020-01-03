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
	int n,a[1001],num[1001],MAX;
	while(scanf("%d",&n)!=EOF)
	{
		memset(num,0,sizeof(num));
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		num[n-1]=1;
		for(int i=n-1;i>=0;i--)
		{
			MAX=0;
			for(int j=n-1;j>i;j--)
			{
				if(a[i]>=a[j])
				{
					if(MAX<num[j])
						MAX=num[j];
				}
			}
			num[i]=MAX+1;
		}
		MAX=0; 
		for(int i=0;i<n;i++)
		{
			if(num[i]>MAX)
				MAX=num[i];
		}
		printf("%d\r\n",MAX);
	}
	return 0;
}

