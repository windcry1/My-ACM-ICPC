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
int a[1000010];
int l,r,sum,n,k,mid;
bool cow(int mid)
{
	if(mid==0)
		return true;
	else
	{
		sum=0;
		for(int i=0;i<n;i++)
			sum+=a[i]/mid;
		return sum>=k;
	}
}
int main()
{
	int Max=0,t;
	while(cin>>n>>k)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			Max=max(a[i],Max);
		}
		l=0,r=Max;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(cow(mid))
			{
				l=mid+1;
				t=mid;
			}
			else
			r=mid-1;
		}
		printf("%d\n",t);
	}
	return 0;
}

