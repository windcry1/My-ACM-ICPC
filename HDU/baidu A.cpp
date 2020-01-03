/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/17/2019 5:53:16 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll a[1010],b[1010];
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
		memset(a,0,sizeof a);memset(b,0,sizeof b);
		int n;cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=n-1;i>=0;i--)
		{
			if(!a[i]&&!b[i]) continue;
			if(!a[i]&&b[i])
			{
				cout<<"0/1"<<endl;
				break;
			}
			if(a[i]&&!b[i])
			{
				cout<<"1/0"<<endl;
				break;
			}
			if(a[i]&&b[i])
			{
				ll gcd = __gcd(a[i],b[i]);
				cout<<a[i]/gcd<<"/"<<b[i]/gcd<<endl;
				break;
			}
		}
	}
	return 0;
}

