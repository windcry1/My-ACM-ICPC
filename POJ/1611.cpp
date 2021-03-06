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
int fa[30010];
int find(int x)
{
    while(fa[x]!=x)
		x=fa[x];
    return x;
}
void __init__(int n)
{
	for(int i=0;i<=n;i++)
	{
		fa[i]=i;
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t,m;
	while(cin>>n>>t)
	{
		if(n==0&&t==0)
			return 0;
		__init__(n);
		while(t--){
			cin>>m;
			int tmp,ori;
			cin>>ori;
			for(int i=1;i<m;i++){
				cin>>tmp;
				if(find(ori)!=find(tmp))
					fa[find(tmp)]=find(ori);
			}
		}
		int res=0;
		for(int i=0;i<n;i++){
			if(find(i)==find(0)) ++res;
		}
		cout<<res<<endl;
	}
 	return 0;
}
