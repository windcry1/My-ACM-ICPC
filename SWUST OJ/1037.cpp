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
	int n1,n2,a[1001],b[1001],i,j;
	while(scanf("%d",&n1)!=EOF)
	{
		for(i=0;i<n1;i++)
			scanf("%d",&a[i]);
		scanf("%d",&n2);
		for(i=0;i<n2;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n1;i++)
		{
			if(i!=n1-1)
				printf("%d ",a[i]);
			else
				printf("%d",a[i]);
		}
		for(i=0;i<n2;i++)
		{
			for(j=0;j<n1;j++)
			{
				if(a[j]==b[i])
					break;
			}
			if(j==n1)
				printf(" %d",b[i]);
		}
		printf("\n");
	}
	
	return 0;
}

