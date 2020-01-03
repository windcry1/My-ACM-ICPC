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
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
//ll power(ll a,ll b)
//{
//	ll res=1;
//    while(b)
//    {
//        if(b&1) res=res*a%mod;
//        b>>=1;
//        a=a*a%mod;
//    }
//    return res;
//}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	unsigned int n,m;
	cin>>n>>m;
	int a[n+10],f[n+10];
	for(int i=0;i<=n;i++)
	{
		a[i]=1000000;
		f[i]=1;
	}
	int t[m+10],l[m+10],r[m+10];
	for(unsigned int i=0;i<m;i++)
		cin>>t[i]>>l[i]>>r[i];
	for(unsigned int i=0;i<m;i++)
	{
		if(!t[i])
		{
			a[l[i]]=a[l[i]-1];
			f[l[i]]=0;
			for(int j=l[i]+1;j<=r[i];j++)
			{
				a[j]=a[j-1]-1;
				f[j]=0;
			}
		}
	}
	int flag=0;
	for(unsigned int i=0;i<m;i++)
	{
		if(t[i])
		{
			for(int j=l[i];j<r[i];j++)
			{
				if(f[j]==0&&f[j+1]==0)
					flag=1;
			}
		}
	}
	cout<<(!flag?"YES":"NO")<<endl;
	if(!flag)
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
 	return 0;
}

