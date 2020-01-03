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
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,count,k,t;
	int a[101];
	while(scanf("%d%d%d",&n,&m,&k)!=EOF)
	{
		t=n%k;
		if(t==0)t=k;
		count=t;
		for(int i=0;i<t;i++)
			a[i]=i;
		while(count<=n)
		{
			for(int i=0;i<t;i++)
				a[i]=(a[i]+m+k-1)%count;//¸Ä±ä±àºÅ
			count+=k; 
		}
		sort(a,a+t);
		for(int i=0;i<t;i++)
		{
			if(i!=t-1)
				printf("%d ",a[i]+1);
			else
				printf("%d \r\n",a[i]+1);
		}
	}
	return 0;
}

