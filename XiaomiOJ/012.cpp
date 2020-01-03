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
int t,num=0,a[10001];
void dfs(int sum,int n,int k)
{
	if(sum==k)
	{
		num++;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(sum+a[i]<=k)
			dfs(sum+a[i],n,k);
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	int i=0,n;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	while(ss>>a[i++]);
	n=--i;
	cin>>t;
	num=0;
	dfs(0,n,t);
	cout<<num<<endl;
 	return 0;
}

