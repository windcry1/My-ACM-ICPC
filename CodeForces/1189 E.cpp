//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
ll a[300100],b[300100];
map<ll,ll> ma;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,p,k;
	cin>>n>>p>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ma[(a[i]%p*a[i]%p*a[i]%p*a[i]%p-k*a[i]%p+p)%p]++;
	}
	int ans=0;
	map<ll,ll>::const_iterator it;
	for(it=ma.begin();it!=ma.end();it++)¡£ 
		ans+=1LL*(it->second)*((it->second)-1LL)/2LL;
	cout<<ans<<endl;
 	return 0;
}

