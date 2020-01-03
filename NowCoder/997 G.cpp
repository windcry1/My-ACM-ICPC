/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 5:57:39 PM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[30010],dp1[30010],dp2[30010]; 
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
    {
        cin>>a[i];
        dp1[i]=INF;
        dp2[i]=INF;
    }
    for(int i=0;i<n;i++)
        *upper_bound(dp1,dp1+n,a[i])=a[i];
    for(int i=n-1;i>=0;i--)
    	*upper_bound(dp2,dp2+n,a[i])=a[i];
    cout<<n-max(lower_bound(dp1,dp1+n,INF)-dp1,lower_bound(dp2,dp2+n,INF)-dp2)<<endl;
}

