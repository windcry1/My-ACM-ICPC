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
int a[1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>t;
		int cnt=0,temp;
		int flag=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]>t)
				cnt++;
			else
			{
				temp=i;
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			temp=0;
			int c=n;
			cout<<cnt<<" "<<c<<" \n";
			cout<<t<<" ";
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else
		{
			int c=0;
			for(int i=n;i>temp;i--)
			{
				a[i]=a[i-1];
				c++;
			}
			a[temp+1]=t;
			cout<<cnt<<" "<<c<<" \n";
			for(int i=0;i<n+1;i++)
			{
				cout<<a[i]<<" ";
			}
		}
	}
 	return 0;
}

