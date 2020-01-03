/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/4/2019 2:04:18 PM
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
ll dp[45][60];
ll num[60];
ll get_ans(int l,int r)
{
    ll ans=0;
    for(int i=l;i<=r;i++)
        ans*=10,ans+=num[i];
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    string s;
    int n,k;
    cin>>n>>k>>s;
    for(int i=1;i<=n;i++)
        num[i]=(ll)(s[i-1]-'0');
    for(int i=1;i<=n;i++)
        dp[i][0] = get_ans(1,i);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int p=j;p<i;p++){
                dp[i][j] = max(dp[i][j],dp[p][j-1] * get_ans(p + 1,i));
            }
        }
    }
    cout<<dp[n][k]<<endl;
    return 0;
}
