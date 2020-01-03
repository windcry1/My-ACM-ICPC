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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int x,y,z;
	while(cin>>x>>y>>z)
	{
		int t=0;
		memset(a,0,sizeof(a));
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
			{
				for(int l=1;l<=z;l++)
				{
					a[i+j+l]++;
				}
			}
		}
		int MAX=0;
		for(int i=0;i<1001;i++)
		{
			if(MAX<a[i])
			{
				MAX=a[i];
				t=i;
			}
		}
		cout<<t<<endl;
	}
 	return 0;
}

