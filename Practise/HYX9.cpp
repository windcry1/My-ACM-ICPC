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
	int num=0;
	int ori;
}a[1001];
int main()
{
	int n,i,j,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<1001;i++)
			a[i].ori=i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&t);
			a[t].num++;
		}
		for(i=0;i<1001;i++)
		{
			for(j=0;j<1000-i;j++)
			{
				if(a[j].num<a[j+1].num)
				{
					node temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				else if(a[j].num==a[j+1].num&&a[j].ori>a[j+1].ori)
				{
					node temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=0;i<1001;i++)
		{
			if(!a[i].num)
				break;
			printf("%d %d\n",a[i].ori,a[i].num);
		}
	}
	return 0;
}

