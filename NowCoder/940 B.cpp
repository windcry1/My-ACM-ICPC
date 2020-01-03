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
const int mod=109;
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
	int n,m;
	cin>>n>>m;
	if(m<=n)
	{
		int res=n;
		for(int i=1;i<m;i++)
		{
			res*=n-1;
			res%=mod;
		}
		cout<<res<<endl;
	}
	else cout<<"0"<<endl;
 	return 0;
}

