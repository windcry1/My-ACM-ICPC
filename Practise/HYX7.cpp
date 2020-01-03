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
struct node{
	int year,month,day;
	int size;
}a[1001];
void SORT(node a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].year<a[j+1].year)
			{
				node t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			else if(a[j].year==a[j+1].year&&a[j].month<a[j+1].month)
			{
				node t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			else if(a[j].year==a[j+1].year&&a[j].month==a[j+1].month&&a[j].day<a[j+1].day)
			{
				node t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			else if(a[j].year==a[j+1].year&&a[j].month==a[j+1].month&&a[j].day==a[j+1].day&&a[j].size<a[j+1].size)
			{
				node t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d/%d/%d %d",&a[i].year,&a[i].month,&a[i].day,&a[i].size);
		SORT(a,n);
		for(i=0;i<n;i++)
			printf("%d/%d/%d %d\n",a[i].year,a[i].month,a[i].day,a[i].size);
	}
	return 0;
}

