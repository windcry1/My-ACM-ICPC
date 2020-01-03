//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
typedef long long ll;
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll a[60];
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	for(int i=1;i<=59;i++)
	{
		ll t=1;
		for(int j=0;j<i;j++)
			t*=2;
		a[i]=t-1;
	}
	ll T,n;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&n);
		ll sum=0;
		for(int i=59;i>=2;i--)
		{
			while(n-a[i]>=0)
			{
				n-=a[i];
				sum+=a[i]+1;
			}
		}
		if(n==1)
			printf("%lld\n",sum+1);
		else if(n==2)
			printf("%lld\n",sum+3);
		else printf("%lld\n",sum);
	}
 	return 0;
}

