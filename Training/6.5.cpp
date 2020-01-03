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
int fa[50010],bug[50010];
void __init__(int n)
{
	for(int i=0;i<=n;i++)
	{
		fa[i]=i;
		bug[i]=0;
	}
}
int find(int x)
{
    if(x==fa[x]) return x;
    int t=find(fa[x]);
    bug[x]=(bug[x]+bug[fa[x]])%3;
    fa[x]=t;
    return t;
}
void merge(int a,int b,int op)
{
	int x=find(a),y=find(b);
	fa[y]=x;//y种族被x种族吃 
	bug[y]=(bug[a]-bug[b]+3+op-1)%3;
}
bool check(int a,int b,int n,int op)
{
	if(a>n||b>n)
		return false;
	if(op==2&&a==b)
		return false;
	return true;
}
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;
	scanf("%d%d",&n,&k);
	int cnt=0,op,a,b;
	__init__(n);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d%d",&op,&a,&b);
		if(!check(a,b,n,op))
		{
			cnt++;
			continue;
		}
		if(find(a)==find(b))
		{
			if(op==1&&bug[a]!=bug[b])
				cnt++;
			else if(op==2&&(bug[a]+1)%3!=bug[b])
				cnt++;
		}
		else merge(a,b,op);
	}
	cout<<cnt<<endl;
 	return 0;
}

