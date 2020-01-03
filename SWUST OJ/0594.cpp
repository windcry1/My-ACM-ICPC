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

int main()
{
	int n,l,a[1001],b[1001],sum,num,t;
	while(scanf("%d%d",&n,&l)!=EOF)
	{
		sum=0,num=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			num++;
			if(sum>l)
			{
				sum-=a[i]+a[i-1];
				num-=2;
				break;
			}
		}
		for(int i=num;i<n;i++)
		{
			if(a[i]>l-sum)
			{
				t=a[i-1];
				num++;
				sum+=a[i-1];
				break;
			}
		}
		printf("%d %d\n",num,sum);
		int number=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]<=t&&number<num)
				printf("%d ",b[i]);
			number++;
		}
		printf("%d\n",t);
	}
	return 0;
}
