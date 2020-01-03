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
int dp[200001],v[200001],m[200001],w[200001];
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int n;
    while(cin>>n&&n>=0)
    {
        memset(dp,0,sizeof(dp));
        int total=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i]>>m[i];
            w[i]=v[i];
            total+=v[i]*m[i];
        }
        for(int i=1;i<=n;i++)
            for(int k=0;k<m[i];k++)
                for(int j=total/2;j>=w[i];j--)
                    dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        cout<<total-dp[total/2]<<" "<<dp[total/2]<<endl;
    }
     return 0;
}
