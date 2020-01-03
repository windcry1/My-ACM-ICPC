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
int a[1001][1001]; 
int main()
{
	int max,x,y,i,j,n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int flag=0;
		for(i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
		{
			max=-MMAX;
			for(j=0;j<m;j++)
			{
				if(max<a[i][j]);
				{
					x=i,y=j;
					max=a[i][j];
				}
			}
			for(j=0;j<n;j++)
			{
				if(a[j][x]<max)
					break;
			}
			if(j!=n)
			{
				printf("ÐÐ:%d ÁÐ:%d\n",i+1,x+1);
				flag=1;
			}
		}
		if(!flag)
			printf("None\n");
	}
	return 0;
}

