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
const ll p=998244353;
ll qmi(ll a,ll b)
{
	ll res=1;
	while(b)
	{
		if(b&1)	res=res*a%p;
		b>>=1;
		a=a*a%p;
	}
	return res;
}
ll inv(ll a)
{
	return qmi(a,p-2);
}
ll solve(ll a,ll b)
{
	return a*inv(b)%p;
}
int w[1010],choose[1010],wp[1010],res[1010];
int m,n;
int total=0;
void dfs(int x,int times,ll a,ll b,int tot)
{
	if(times==m)
	{
		for(int i=0;i<n;i++)
			res[i]=(res[i]+solve(a*wp[i],b))%p;
		return;
	}
	for(int i=0;i<n;i++)
	{
		wp[i]+=choose[i];
		if(wp[i]<0)
		{
			wp[i]-=choose[i];
			continue;
		}
		dfs(i,times+1,a*(wp[i]-choose[i]),b*tot,tot+choose[i]);
		wp[i]-=choose[i];
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>choose[i];
		if(choose[i]==0)
			choose[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
		total+=w[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			wp[j]=w[j];
		wp[i]+=choose[i];
		dfs(i,1,w[i],total,total+choose[i]);
	}
	//cout<<solve(5,6)<<endl;
	//cout<<solve(11,6)<<endl;
	for(int i=0;i<n;i++)
		cout<<res[i]<<endl;
 	return 0;
}

