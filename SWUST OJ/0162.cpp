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
	int n,m,a[100001];
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			return 0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(i%m==0)
			{
				if(i==0)printf("%d",a[i]);
				else printf(" %d",a[i]);
			}
		}
		putchar('\n');
	}
	return 0;
}

