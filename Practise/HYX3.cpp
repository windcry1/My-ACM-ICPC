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
void SORT(int a[],int x)
{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int n,a,b[101],c[101],i,j,k;
	while(scanf("%d",&n)!=EOF)
	{
		j=0;k=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a%2==0)
				b[j++]=a;//b´æÅ¼Êý 
			else
				c[k++]=a;//c´æÆæÊý 
		}
		SORT(b,j);
		SORT(c,k);
		for(int i=0;i<j;i++)
			printf("%d ",b[i]);
		for(i=0;i<k;i++)
		{
			if(i!=k-1)
				printf("%d ",c[i]);
			else
				printf("%d\n",c[i]); 
		}
	}
	
	return 0;
}

