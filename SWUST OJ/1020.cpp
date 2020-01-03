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
int a[100001];
int play(int m,int A[])
{
	int mine=1001,maxe=-1;
    for(int i=0;i<m;i++)
	{
		mine=min(mine,A[i]);
    	maxe=max(maxe,A[i]);
	}
	return maxe-mine;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int MAX=1001;
		for(int i=0;i<n-m+1;i++)
			MAX=min(MAX,a[i+m-1]-a[i]);
		cout<<MAX<<endl;
	}
 	return 0;
}

