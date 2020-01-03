/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/27/2019 3:17:08 PM
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
const int MAX_N=1e5+5;
int dp[MAX_N],now[MAX_N],sum[MAX_N];
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    cin>>s;
    ll res=0;
    for(int i=1;i<=s.length();i++)
        sum[i]=sum[i-1]+s[i-1]-'0';
    int temp[3]={0};
    for(int i=s.length()-1;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(!(s[i]-'0')) ++dp[i];
        else res+=((dp[i]*(dp[i]+1))>>1)-(dp[i]>2?((dp[i]-2)*(dp[i]-1)>>1):0),dp[i]=0;
        if(dp[i]>=2)
            for(int j=i-1;j>=0;j--)
                if((sum[i+1]-sum[j])%3==0)
                    ++res;
    }
    cout<<res<<endl;
    return 0;
}
