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
int a[1001],num=0;
void dfs(int n,int sum,int cnt,int m)
{
	if(cnt==3&&sum==0)
	{
		num++;
		return;
	}
	if(n==m||cnt>=3)
		return;
	dfs(n+1,sum+a[n],cnt+1,m);
	dfs(n+1,sum,cnt,m);
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	int i=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	while(ss>>a[i++]);
	sort(a,a+i-1);
//	for(int j=0;j<i-1;j++)
//		cout<<a[j]<<endl;
//	for(int j=0;j<i-1;j++)
//		cout<<a[j]<<endl;
	dfs(0,0,0,i-1);
	cout<<num<<endl;
 	return 0;
}

