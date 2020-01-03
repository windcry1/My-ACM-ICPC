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
int jc(int n)
{
	int num=1;
	for(int i=1;i<=n;i++)
		num*=i;
	return num;
}
int main()
{
	int n,a[1001],b[1001],num,count;
	while(scanf("%d",&n)!=EOF)
	{
		num=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			count=0;
			for(int j=0;j<n;j++)
			{
				if(b[j]==MMAX)
					continue;
				count++;
				if(a[i]==b[j])
				{
					num+=jc(n-i-1)*(count-1);
					b[j]=MMAX;
					break;
				}
			}
		}
		printf("%d\n",num);
		int t;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]<a[i+1])
			{
				t=i;
				break;
			}
		}
		int MAX;
		int y=t+1;
		MAX=a[y];
		for(int i=t+1;i<n;i++)
		{
			if(a[i]<MAX&&a[t]<a[i])
			{
				MAX=a[i];
				y=i;
			}
		}
		swap(a[y],a[t]);
		sort(a+t+1,a+n);
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				printf("%d ",a[i]);
			else
				printf("%d \n",a[i]);
		}
	}
	return 0;
}

