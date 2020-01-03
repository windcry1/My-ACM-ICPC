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
struct node{
	int p,m;
}a[110];
bool cmp(const node a,const node b)
{
	return a.p<b.p;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=0;i<m;i++)
			cin>>a[i].p>>a[i].m;
		sort(a,a+m,cmp);
		int cnt=0;
		while(true)
		{
			int f=0;
			for(int i=0;i<m;i++)
				if(a[i].p!=0&&a[i].p!=n)
					f=1;
			if(!f)
			{
				cout<<cnt<<"\r\n";
				break;
			}
			for(int i=0;i<m;i++)
			{
				if(a[i].p!=0&&a[i].p!=n)
				{
					a[i].p+=a[i].m;
					if(a[i].p==a[i+1].p&&a[i].m==-a[i+1].m)
					{
						a[i].m=-a[i].m;
						a[i+1].m=-a[i+1].m;
						a[i].p+=a[i].m;
						a[i+1].p-=a[i+1].m;
					}
					if(a[i].p==a[i-1].p&&a[i].m==-a[i-1].m)
					{
						a[i].m=-a[i].m;
						a[i-1].m=-a[i-1].m;
					}
				}
			}
			cnt++;
		}
	}
	return 0;
}

