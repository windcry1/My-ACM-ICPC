//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k,t;
	int a[1001];
	scanf("%d%d",&n,&k);
	int flag=n;
	ll times=0;
	ll num=0;
	fill(a+1,a+n+1,1);
	while(flag!=1)
	{
		times++;
		if(times%n!=0)
			t=times%n;
		else
			t=n;
		if(a[t])
			num++;
		if((num%k==0||num%10==k)&&a[t])
		{
			a[t]=0;
			flag--;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i])
			printf("%d\n",i);
	}
	return 0;
}

