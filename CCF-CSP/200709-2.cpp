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
struct node{
	int w,s;//s表示时间，w表示钥匙号码 
}r[1001],b[1001];//b借书的时间，r还书的时间 
array<int,1001> a;
bool cmp(node a,node b)
{
	if(a.s<b.s)
		return true;
	else if(a.s==b.s)
		return a.w<b.w;
	return false;
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k,x,y,z,i;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		for(i=1;i<=n;i++)
			a[i]=i;
		for(i=0;i<k;i++)
		{
			scanf("%d%d%d",&x,&y,&z);
			b[i].w=x;
			b[i].s=y;
			r[i].s=y+z;
			r[i].w=x;
		}
		sort(b,b+k,cmp);
		sort(r,r+k,cmp);
		int t=0,m=0;
		while(1)
		{
			if(t==k&&m==k)
				break;
			if(r[m].s<=b[t].s||t==k)
			{
				for(i=1;i<=n;i++)
				{
					if(a[i]==0)
					{
						a[i]=r[m].w;
						m++;
						break;
					}
				}
			}
			else if(r[m].s>b[t].s||m==k)
			{
				for(i=1;i<=n;i++)
				{
					if(a[i]==b[t].w)
					{
						a[i]=0;
						t++;
						break;
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(i!=n)
				printf("%d ",a[i]);
			else
				printf("%d\n",a[i]);
		}
	}
	return 0;
}

