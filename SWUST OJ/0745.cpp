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
int a[2000010];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int x,y;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
			break;
		for(int i=x;i<y;i++)
			a[i]=1;
	}
	int cnt=0;
	for(int i=0;i<1100000;i++)
		cnt+=a[i];
	cout<<cnt<<endl;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
			break;
		if(a[x]==0)// 1 
			continue;
		if(a[x]==1&&a[x-1]==0)// 2
		{
			for(int i=x;i<y;i++)
				if(a[i]==1) a[i]=0;
				else break;
			
		}
		else
		{
			for(int i=x;i<y;i++)// 3
			{
				if(a[i]==1)
					a[i]=0;
				else break;
			}
		}
	}
	cnt=0;
	for(int i=0;i<1100000;i++)
		cnt+=a[i];
	cout<<cnt<<endl;
 	return 0;
}

