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
	int a[1001],n,t;
	while(scanf("%d",&n)!=EOF)
	{
		int MAX=-MMAX;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n-4;i++)
		{
			if(MAX<a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4])
			{
				MAX=a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4];
				t=i;
			}
		}
		printf("The position is %d,%d,%d,%d,%d\n",t+1,t+2,t+3,t+4,t+5);
		printf("The numbers are %d,%d,%d,%d,%d\n",a[t],a[t+1],a[t+2],a[t+3],a[t+4]);
		printf("The MAX is %d\n",a[t]+a[t+1]+a[t+2]+a[t+3]+a[t+4]);
	}
	return 0;
}

