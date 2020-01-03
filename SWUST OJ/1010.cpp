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
int a[10001];
int main()
{
	int t,n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&t);
		for(i=0;i<n;i++)
		{
			if(a[i]==t)
			{
				printf("%d\n",i);
				break;
			}
		}
		if(i==n)
			printf("-1\n");
		int num=0;
		while(n)
		{
			num++;
			n/=2;
		}
		printf("%d\n",num);
	}
	
	return 0;
}

