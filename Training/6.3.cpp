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
const int MMAX=2147483647;
const int mod=1e9+7;
int fa[10011];
int find(int x)
{
	if(fa[x]==x)
		return x;
	return find(fa[x]);
}
int main(int argc, char const *argv[])
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>m>>n;
		for(int i=0;i<=1100;i++)
			fa[i]=i;
		for(int i=1;i<=n;i++)
		{
			int a,b;
			cin>>a>>b;
			if(find(a)!=find(b))
				fa[find(a)]=find(b);
		}
		set<int> sett;
		for(int i=1;i<=m;i++)
			sett.insert(find(i));
		cout<<sett.size()<<endl;
	}
 	return 0;
}

