//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int sum=0,MAX=0;
int w,n,a[1001],flag=0;
void dfs(int x)
{
	if(x==n&&MAX==w)
	{
		flag=1;
		return;
	}
	else if(x==n)
		return;
	else
	{
		MAX+=a[x];
		dfs(x+1);
		MAX-=a[x];
		dfs(x+1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>w>>n)
	{
		sum=0;MAX=0;flag=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		dfs(0);
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

