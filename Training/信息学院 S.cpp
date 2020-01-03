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
int a[40];
int dp[3001000];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int m,n;
	double pp;
	while(cin>>pp>>n&&n)
	{
		m=100*pp;
		for(int i=0;i<=m;i++)
			dp[i]=0;
		char ob,op;
		int t,cnt=1;
		double de;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			int temp[3]={0},f=0;
			for(int j=0;j<t;j++)
			{
				cin>>ob>>op>>de;
				if(ob=='A')
					temp[0]+=de*100;
				else if(ob=='B')
					temp[1]+=de*100;
				else if(ob=='C')
					temp[2]+=de*100;
				else f=1;
			}
			int sum=temp[0]+temp[1]+temp[2];
			int ma=max(temp[0],max(temp[1],temp[2]));
			if(sum>100000||ma>60000||f)
				continue;
			a[cnt++]=sum;
		}
		for(int i=1;i<cnt;i++)
			for(int j=m;j>=a[i];j--)
				dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		cout<<fixed<<setprecision(2)<<(double)(dp[m])/100<<endl;
	}
 	return 0;
}

