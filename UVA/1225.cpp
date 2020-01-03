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
	int T,n;
	array<int,10> a;
	scanf("%d",&T);
	while(T--)
	{
		a.fill(0);
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			int t=i;
			while(t)
			{
				a[t%10]++;
				t/=10;
			}
		}
		for(int i=0;i<10;i++)
		{
			if(i!=9)
				printf("%d ",a[i]);
			else
				printf("%d\n",a[i]);
		}
	}
	return 0;
}

