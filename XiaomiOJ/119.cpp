
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
int a[1001],n,flag=MMAX;
void dfs(int x,int p)
{
	if(x>n-1)
		return;
	if(x==n-1)
	{
		if(flag>p)
			flag=p;
		return;
	}
	for(int i=1;i<=a[x];i++)
		dfs(x+i,p+1);
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int i=0;
	while(cin>>a[i++]);
	n=--i;
	dfs(0,0);
	cout<<flag;
 	return 0;
}

