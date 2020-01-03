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
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,t,a[10];
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%d",&t);
			for(int i=0;i<10;i++)
				scanf("%d",&a[i]);
			sort(a,a+10,cmp);
			printf("%d %d\n",t,a[2]);
		}
	}
	
	return 0;
}

