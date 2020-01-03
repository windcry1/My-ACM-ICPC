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
const int book[13]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
int a[10001],i;
void dfs(int x,int num)
{
	if(x==13)
		a[i++]=num;
	else
	{
		dfs(x+1,num);
		num+=book[x];
		dfs(x+1,num);
	}
}
int main()
{
	int n;
	dfs(0,0);
	while(scanf("%d",&n)!=EOF)
	{
		int flag=0;
		if(n==-1)
			return 0;
		if(n!=0)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]==n)
				{
					flag++;
					printf("YES\n");
					break;
				}
			}
			if(!flag)
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}

