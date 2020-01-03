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

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,a[10001];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int MIN=MMAX;
	int MAX=-MMAX;
	int t1,t2;
	for(int i=0;i<n;i++)
	{
		if(MIN>a[i])
		{
			MIN=a[i];
			t1=i;
		}
		if(MAX<a[i])
		{
			MAX=a[i];
			t2=i;
		}
	}
	cout<<"Lmax="<<t2<<"\r\n";
	cout<<"Lmin="<<t1;
	return 0;
}

