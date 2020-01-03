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
int a[10001],b[10001];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(a[0]=1;;a[0]++)
		{
			a[1]=2*b[0]-a[0];
			if(a[1]<=0)
			{
				a[1]++;
				if(a[1]<=0)
					continue;
			}
			for(i=1;i<n-1;i++)
			{
				a[i+1]=3*b[i]-a[i]-a[i-1];
				if(a[i+1]<=0)
				{
					a[i+1]++;
					if(a[i+1]<=0)
					{
						a[i+1]++;
						if(a[i+1]<=0)
							break;
					}
				}
			}
			if(i!=n-1)
				continue;
			a[n-1]=2*b[n-1]-a[n-2];
			if(a[n-1]>0)
				break;
			if(a[n-1]==0)
			{
				a[n-1]++;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				printf("%d ",a[i]);
			else printf("%d",a[i]);
		}
		printf("\n");
	}
	
	return 0;
}

