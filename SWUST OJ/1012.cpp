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
int Hash[1001][1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int m,n,a[1001],t,b[1001];
	cin>>m>>n;
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		Hash[a[i]%m][b[a[i]%m]++]=a[i];
	}
	cin>>t;
	int p=t%m;
	int count=0;
	int i;
	for(i=0;i<b[p];i++)
	{
		if(Hash[p][i]==t)
			break;
		else count++;
	}
	if(count!=b[p])
		cout<<p<<","<<i+1;
	else
		cout<<"-1";
 	return 0;
}

