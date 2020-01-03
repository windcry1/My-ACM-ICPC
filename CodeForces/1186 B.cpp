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
	ll n,m;
	cin>>n>>m;
	ll res;
	ll p=n-n/3*3,q=m-m/3*3;
	if(p==0)
		res=(n/3)*((m+1)/2);
	else if(p==1)
		res=(n/3)*((m+1)/2)+(m+1)/3;
	else if(p==2)
		res=(n/3)*((m+1)/2)+(m+1)/2;
	ll res1;
	if(q==0)
		res1=(m/3)*((n+1)/2);
	else if(q==1)
        res1=(m/3)*((n+1)/2)+(n+1)/3;
    else if(q==2)
        res1=(m/3)*((n+1)/2)+(n+1)/2;
    if(res<res1)
    	cout<<res1<<endl;
    else cout<<res<<endl;
 	return 0;
}

