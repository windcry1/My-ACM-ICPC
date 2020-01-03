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
struct node{
	double a,b,r;
}x[10001];
bool cmp(node x,node y)
{
	return x.r>y.r;
}
int main()
{
	int n,m;
	double sum;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		sum=0;
		if(m==-1&&n==-1)
			return 0; 
		for(int i=0;i<n;i++)
		{
			scanf("%lf%lf",&x[i].a,&x[i].b);
			x[i].r=x[i].a/x[i].b;
		}
		sort(x,x+n,cmp);
		for(int i=0;i<n&&m>=0;i++)
		{
			if(m>x[i].b)
			{
				sum+=x[i].a;
				m-=x[i].b;
			}
			else
			{ 
				sum+=m*x[i].r;
				m=0;
			} 
		}
		printf("%.3lf\n",sum); 
	}
	return 0;
}

