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
#include<map>
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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,a[10000],total;
	double ave=0;
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ave+=a[i];
	}
	ave/=n;
	for(int i=0;i<n;i++)
	{
		if(a[i]<ave)
			cout<<i+1<<" ";
	}
 	return 0;
}

