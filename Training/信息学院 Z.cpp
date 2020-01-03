//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
#pragma GCC optimize("O2")
#pragma G++ optimize("O2")
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
int a[1010],c[1010];
int dp[100100];
int n,m;
void ZeroOnePack(int cost,int valum)		//01背包问题
{
    for(int i=m;i>=cost;i--)
        dp[i]=max(dp[i],dp[i-cost]+valum);
    return; 
}

void CompletePack(int cost,int valum)		//完全背包问题
{
    for(int i=cost;i<=m;i++)
        dp[i]=max(dp[i],dp[i-cost]+valum);
    return;
}

void MultiplePack(int cost,int valum,int amount)	//多重背包问题
{
    if(cost*amount>=m)
        CompletePack(cost,valum);
    else
    {
        int k=1;
        while(k<amount)
        {
            ZeroOnePack(cost*k,valum*k);
            amount-=k;
            k=k<<1;
        }
        ZeroOnePack(cost*amount,valum*amount);
     }
    return; 
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n>>m&&n&&m)
	{
		for(int i=0;i<=m;i++)
			dp[i]=0; 
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			cin>>c[i];
		for(int i=1;i<=n;i++)
			MultiplePack(a[i],a[i],c[i]);
		int ans=0;
		for(int i=1;i<=m;i++)
			if(dp[i]==i)
				ans++;
		cout<<ans<<endl;
	}	
 	return 0;
}

