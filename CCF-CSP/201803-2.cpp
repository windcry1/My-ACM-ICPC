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
array<int,101> flag;
struct node{
	int x;
	int y;
}a[1001];
bool cmp(node a,node b)
{
	return a.y<b.y;
}
bool cmp1(node a,node b)
{
	return a.x<b.x;
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,l,t;
	while(scanf("%d%d%d",&n,&l,&t)!=EOF)
	{
		a[0].y=0;
		a[n+1].y=l;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i].y);
			a[i].x=i;
		}
		flag.fill(1);
		sort(a+1,a+n+1,cmp);
		while(t--)
		{
			for(int i=1;i<=n;i++)
			{
				a[i].y+=flag[i];
				if(a[i].y==a[i-1].y)
				{
					flag[i]=-flag[i];
					flag[i-1]=-flag[i-1];
				}
				else if(a[i].y==a[i+1].y)
				{
					flag[i]=-flag[i];
					flag[i+1]=-flag[i+1];
				}
			}
		}
		sort(a+1,a+n+1,cmp1);
		for(int i=1;i<=n;i++)
		{
			if(i!=n)
				printf("%d ",a[i].y);
			else
				printf("%d\n",a[i].y);
		}
	}
	return 0;
}

