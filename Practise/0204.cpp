//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
	int i,n,t,a[1001],b[1001];
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		cin>>t;
		int count=0; 
		for(i=0;i<n;i++)
		{
			count++;
			if(a[i]==t)
			{
				printf("%d\n%d\n",i,count);
				break;
			}
		}
		if(i==n)
			printf("-1\n%d\n",count);
		sort(b,b+n);
		count=0;
		for(i=0;i<n;i++)
		{
			count++;
			if(b[i]==t)
			{
				printf("%d\n%d\n",i,count);
				break;
			}
			else if(b[i]>t)
			{
				printf("-1\n%d\n",count);
				break;
			}
		}
		int l=0,r=n-1,mid=(l+r)/2;count=0;
		int flag=0;
		while(l<=r)
		{
			count++;
			mid=(l+r)/2;
			if(b[mid]==t)
			{
				printf("%d\n%d\n",mid,count);
				flag=1;
				break;
			}
			else if(a[mid]<t)
				l=mid+1;
			else if(a[mid]>t)
				r=mid-1;
		}
		if(!flag)
			printf("-1\n%d\n",count);
	}
	return 0;
}

