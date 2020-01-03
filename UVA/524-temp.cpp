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
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int n, A[50], isp[50], vis[50];
bool isprime(int x)
{
	for(int i=2;i*i<=x;i++)
		if(x%i==0)return false;
	return true;
}
void dfs(int cur)
{
	if(cur==n&&isp[A[0]+A[n-1]])
	{
	    for(int i=0;i<n;i++)
		{
	    	if(i!= 0) printf(" ");
	    	printf("%d", A[i]);
		}
    	printf("\n");
	}
	else
		for(int i=2;i<=n;i++)
			if(!vis[i] && isp[i+A[cur-1]])
			{
		      A[cur] = i;
		      vis[i] = 1;
		      dfs(cur+1);
		      vis[i] = 0;
			}
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int kase=0;
	while(scanf("%d", &n)==1&&n>0)
	{
    	if(kase>0)printf("\n");
    	printf("Case %d:\n",++kase);
    	for(int i=2;i<=n*2;i++)
			isp[i]=isprime(i);
    	memset(vis,0,sizeof(vis));
    	A[0]=1;
    	dfs(1);
	}
	return 0;
}
