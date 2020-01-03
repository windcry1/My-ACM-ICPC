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
int dp[120010],w[20010],v[20010],num[10];
bool dp1(int total)
{
   memset(dp,0,sizeof(dp));
   int half=total/2;
   int i,j,k;
	for(i=1;i<=6;i++)
    	for(j=1;j<=num[i];j++)
     		for(k=half;k>=i;k--)
				dp[k]=max(dp[k],dp[k-v[i]]+v[i]);
   if(dp[half]==half) return true; 
   else return false;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int times=0;
	while(true)
	{
		for(int i=1;i<=6;i++)
		{
			cin>>num[i];
			num[i]%=10;
		}
		int to=0;
		for(int i=1;i<=6;i++)
		{
			v[i]=i;
			w[i]=1;
			to+=v[i]*num[i];
		}
		int f=0;
		for(int i=1;i<=6;i++)
			if(num[i]!=0)
			{
				f=1;
				break;
			}
		if(!f)return 0;
		cout<<"Collection #"<<++times<<":\n";
		if(!(to&1))
		{
			if(dp1(to))
				cout<<"Can be divided."<<endl;
			else cout<<"Can't be divided."<<endl; 
		}
		else
			cout<<"Can't be divided."<<endl; 
		cout<<endl;
	}
 	return 0;
}

