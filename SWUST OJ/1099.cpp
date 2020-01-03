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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,a[1001];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n%2==0)
	{
		for(int i=0;i<n/2;i++)
		{
			if(a[i]>a[n/2+i])
				swap(a[i],a[n/2+i]);
		}
	}
	else
	{
		for(int i=0;i<n/2;i++)
		{
			if(a[i]>a[n/2+i+1])
				swap(a[i],a[n/2+i+1]);
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
 	return 0;
}

