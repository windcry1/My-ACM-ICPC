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
int jc(int n)
{
	int num=1;
	for(int i=1;i<=n;i++)
		num*=i;
	return num;
}
int main()
{
	int n,a,sum,i,b[11],c[11],d[11],t,num;
	while(scanf("%d",&n)!=EOF)
	{
		memset(d,0,sizeof(d));
		sum=1,i=0;
		scanf("%d",&a);
		for(i=0;i<n;i++)
			b[i]=i+1;
		i=n-1;
		while(a!=0)
		{
			c[i--]=a%10;
			a/=10; 
		}
		for(int i=0;i<n;i++)
		{
			num=0;
			for(int j=0;j<n;j++)
			{
				if(b[j]==0)
					continue;
				if(b[j]==c[i])
				{
					b[j]=0;
					d[i]=num;
					break;
				}
				num++;
			}
		}
		for(i=0;i<n;i++)
			sum+=d[i]*jc(n-i-1);
		printf("%d\n",sum);
	}
	return 0;
}
