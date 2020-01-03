/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/18/2019 10:01:09 PM
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
int a[100010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int n;cin>>n;
    int cnt_zero=0;
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
        if(a[i]==0)
			cnt_zero++;
    }
    sort(a,a+n);
    bool flag=true;
    ll ans = 0;
    for(int i=0;i<n;i++)
	{
        if(a[i]<0)
			ans+=-1-a[i],flag=!flag;
        else if(a[i]>0)
			ans+=a[i]-1;
    }
    if(cnt_zero)
        cout<<ans+cnt_zero<<endl;
    else
    	cout<<(flag==1?ans:ans+2)<<endl;
}

