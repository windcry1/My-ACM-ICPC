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
double a[100100];
int b[100100];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		b[i]=int(floor(a[i]));
		sum+=b[i];
	}
	if(sum==0)
	{
		for(int i=0;i<n;i++)
			cout<<b[i]<<endl;
	}
	if(sum<0)
	{
		int cnt=-sum;
		for(int i=0;i<n;i++)
		{
			if(b[i]!=a[i]&&b[i]!=a[i]+1)
			{
				b[i]++;
				cnt--;
			}
			if(cnt==0)
				break;
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<endl;
	}
 	return 0;
}

