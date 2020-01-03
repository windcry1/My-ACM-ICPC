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
int n,a[1010],b[1010];
int f(int l,int r)
{
	int p=a[l],q=b[l];
	for(int i=l+1;i<=r;i++)
	{
		p=p|a[i];
		q=q|a[i];
	}
	return p+q;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	int p=a[0],q=b[0];
	for(int i=1;i<n;i++)
	{
		p=p|a[i];
		q=q|b[i];
	}
	cout<<p+q;
 	return 0;
}

