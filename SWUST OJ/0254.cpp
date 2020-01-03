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
int a[10001],b[10001],c[10001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int cnt=0;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				if(i==j)
					continue;
				if(j==0)
				{
					cnt++;
					for(int k=0;k<=i;k++)
						c[i-k]=a[k];
					for(int k=0;k<=i;k++)
						a[k]=c[k];
					break;
				}
				else
				{
					cnt+=2;
					for(int k=0;k<=j;k++)
						c[j-k]=a[k];
					for(int k=0;k<=j;k++)
						a[k]=c[k];
					for(int k=0;k<=i;k++)
						c[i-k]=a[k];
					for(int k=0;k<=i;k++)
						a[k]=c[k];
				}
			}
		}
	}
	cout<<cnt<<endl;
 	return 0;
}

