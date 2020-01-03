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
int fa[2010],bug[2010],flag=1;
int find(int x)
{
    if(x==fa[x])
    	return x;
    int t=find(fa[x]);
	bug[x]=bug[x]^bug[fa[x]];//每一层更新一次，同时路径压缩 
	fa[x]=t;//路径压缩，都连接到根节点上面 
	return t;
}
void merge(int a,int b)
{
	int x=find(a),y=find(b);
	if(x!=y)
	{
		fa[y]=x;
		bug[y]=!(bug[b]^bug[a]);//有减法，小心结果小于0
	}
	else if(bug[a]==bug[b])
		flag=0;
}
void __init__(int n)
{
	for(int i=0;i<=n;i++)
	{
		fa[i]=i;
		bug[i]=0;
	}	
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,times=0;
	cin>>T;
	while(T--)
	{
		int n,m;
		flag=1;
		cin>>n>>m;
		__init__(n);
		int a,b;
		while(m--)
		{
			cin>>a>>b;
			if(flag) 
			merge(a,b);
		}
		cout<<"Scenario #"<<++times<<":\n"<<(flag?"No suspicious bugs found!\n":"Suspicious bugs found!\n")<<endl;
	}
 	return 0;
}

