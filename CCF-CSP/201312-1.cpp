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
#include<array>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[10001];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,MAX=0,t;
	cin>>n;
	int T=n;
	while(T--)
	{
		cin>>t;
		a[t]++;
		if(MAX<a[t])
			MAX=a[t];
	}
	for(int i=0;i<10001;i++)
		if(a[i]==MAX)
		{
			cout<<i<<endl;
			break;
		}
	return 0;
}

