//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
struct node{
	int a,b,c;
	bool operator <(const node a)const
	{
		return this->a<a.a||(this->a==a.a&&this->b<a.b);
	}
}x[110];
int dp[110];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,times=0;
	while(cin>>n&&n)
	{
		int a[4];
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[0]>>a[1]>>a[2];
			sort(a,a+3);
			x[cnt].a=a[2];x[cnt].b=a[1];x[cnt++].c=a[0];
			x[cnt].a=a[2];x[cnt].b=a[0];x[cnt++].c=a[1];
			x[cnt].a=a[1];x[cnt].b=a[0];x[cnt++].c=a[2];
		}
		sort(x,x+cnt);
		for(int i=0;i<cnt;i++)
			dp[i]=x[i].c;
		for(int i=1;i<cnt;i++)
			for(int j=0;j<i;j++)
				if(x[i].a>x[j].a&&x[i].b>x[j].b)
					dp[i]=max(dp[i],dp[j]+x[i].c);
		int MAX=0;
		for(int i=0;i<cnt;i++)
			MAX=max(dp[i],MAX);
		cout<<"Case "<<++times<<": maximum height = "<<MAX<<endl;
	}
 	return 0;
}

