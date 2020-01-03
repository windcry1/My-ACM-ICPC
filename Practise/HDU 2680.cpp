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
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0xfffffff;
const int mod=1e9+7;
int dp[1001][1001];
int vis[1001];
int n,m,s,a,b,c,w;
int MIN;
void DJ()
{
    int cur = s;
    int next,min;
    dp[cur][cur] = 0;
    while(1)
    {
        min = MMAX;
        vis[cur] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 1)continue;
            if (dp[s][i] > dp[s][cur] + dp[cur][i])
                dp[s][i] = dp[s][cur] + dp[cur][i];
            if (dp[s][i] < min)
            {
                min = dp[s][i];
                next = i;
            }
        }
        if ( min == MMAX)break;
        cur = next;
    }
}
int main()
{
     ios::sync_with_stdio(false);
     //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    while(cin>>n>>m>>s)
    {
        MIN=MMAX;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<1001;i++)
            for(int j=0;j<1001;j++)
            {
                if(i==j)dp[i][j]=0;
                else dp[i][j]=MMAX;
            }
        while(m--)
        {
            cin>>a>>b>>c;
            if(dp[b][a]>c)
                dp[b][a]=c;
        }
        cin>>w;
        DJ();
//        for(int i=1;i<=n;i++)
//        {
//            if(i==s)continue;
//            for(int j=1;j<=n;j++)
//            {
//                if(j==s||j==i)
//                    continue;
//                dp[s][i]=min(dp[s][i],dp[s][j]+dp[j][i]);    
//            }
//        }
        while(w--)
        {
            int t;
            cin>>t;
            if(dp[s][t]<MIN)
                MIN=dp[s][t];
        }
        if(MIN!=MMAX)
            cout<<MIN<<endl;
        else cout<<"-1"<<endl;
    }
     return 0;
}
