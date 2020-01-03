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
int fa[100010],vis[100010],flag=0;
void __init__()
{
	for(int i=0;i<100010;i++)
		fa[i]=i;
}
int find(int x)//非递归算法 
{
    int k=x;
    while(fa[x]!=x)
		x=fa[x];
	int tmp;
    while(fa[k]!=x)//路径压缩，把这些节点直接连起来 
    {
        tmp=fa[k];
        fa[k]=x;
        k=tmp;
    }
    return x;
}
//int find(int x)
//{
//	return x==fa[x]?x:find(fa[x]);
//}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;
	__init__();
	memset(vis,0,sizeof(vis));
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			int cnt=0;
			for(int i=0;i<100010;i++)
			{
				if(vis[i]&&fa[i]==i)
					cnt++;//查找有几个爸爸 
			}
			if(cnt>1)
				flag=1;
			cout<<(flag ? "No" : "Yes")<<endl;
			memset(vis,0,sizeof(vis));
			flag=0;
			__init__();
			continue;
		}
		if(a==-1&&b==-1)
			return 0;
		vis[a]=1;
		vis[b]=1;
		if(find(a)!=find(b))
		{
			fa[find(a)]=find(b);
			vis[a]=1;
			vis[b]=1;
		}
		else flag=1;
	}
 	return 0;
}

