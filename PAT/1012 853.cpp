/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 12:16:36 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll a[100010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		ll n;cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,greater<ll>());
		ll cnt1=0,cnt2=0;
		for(int i=0;i<n;i+=2) cnt1+=a[i];
		for(int i=1;i<n;i+=2) cnt2+=a[i];
		cout<<cnt1<<" "<<cnt2<<endl;
	}
	return 0;
}

