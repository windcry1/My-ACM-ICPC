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
int vis[100000001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,flag=0;
	cin>>n;
	int t=n;
	int sum=0;
	while(t)
	{
		sum+=(t%10)*(t%10);
		t/=10;
	}
	n=sum;
	while(!vis[n])
	{
		sum=0;
		t=n;
		vis[n]=1;
		while(t)
		{
			sum+=(t%10)*(t%10);
			t/=10;
		}
		n=sum;
		
		if(n==1)
		{
			flag=1;	
			break;
		}
	}
	cout<<(flag?"true":"false");
 	return 0;
}

