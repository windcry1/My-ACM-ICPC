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
int times,n;
int b[21],a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int vis[20];
bool isprime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
void dfs(int x)
{
	if(x==n-1&&isprime(b[0]+b[x]))
	{
		for(int i=0;i<n;i++)
		{
			if(i<n-1)
				printf("%d ",b[i]);
			if(i==n-1)
				printf("%d",b[i]);
		} 
		printf("\n");
		return;
	}
	for(int i=1;i<n;i++)
	{
		if(isprime(a[i]+b[x])&&!vis[i])
		{
			b[x+1]=a[i];
			vis[i]=1;
			dfs(x+1);
			vis[i]=0;
		}
	}
}
int main()
{
	times=1;
	while(scanf("%d",&n)!=EOF)
	{
		printf("Case %d:\n",times++);
		b[0]=1;
		dfs(0);
		printf("\n");
	}
	return 0;
}

