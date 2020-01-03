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
	int n;
	while(cin>>n)
	{
		int l=0,r=2*n-2,t=0,b=2*n-2;
		int a[2*n-1][2*n-1];
		for(int k=1;k<=n;k++)
		{
			for(int i=l;i<=r;i++)
			{
				a[t][i]=k;
				a[b][i]=k;
			}
			for(int i=t;i<=b;i++)
			{
				a[i][l]=k;
				a[i][r]=k;
			}
			l++;r--;t++;b--;
		}
		for(int i=0;i<2*n-1;i++)
		{
			for(int j=0;j<2*n-1;j++)
			{
				if(j!=2*n-2)
				printf("%d ",a[i][j]);
				else
				printf("%d\n",a[i][j]);
			}
		}
	}
	return 0;
}

