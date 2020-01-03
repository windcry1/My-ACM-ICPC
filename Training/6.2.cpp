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
int fa[1010],x[1010],y[1010],flag[1010];
int dis2(int a,int b)
{
	return (x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]);
}
int find(int x)
{
    return ((x==fa[x])?x:find(fa[x]));
}
void __init__(int n)
{
	for(int i=0;i<=n;i++)
		fa[i]=i;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,d;
	char c;
	cin>>n>>d;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	__init__(n);
	int t,a,b;
	while(cin>>c)
	{
		if(c=='O')
		{
			cin>>t;
			flag[t]=1;
			for(int i=1;i<=n;i++)
			{
				if(flag[i]&&i!=t)
				{
					if(find(i)!=find(t))
						if(dis2(i,t)<=d*d)
							fa[find(t)]=find(i);
				}
			}
		}
		else if(c=='S')
		{
			cin>>a>>b;
			if(flag[a]==1&&flag[b]==1&&find(a)==find(b))
				cout<<"SUCCESS"<<endl;
			else
				cout<<"FAIL"<<endl;
				
		}
	}
 	return 0;
}

