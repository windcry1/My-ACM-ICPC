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
	int a,b;
}x[10001];
int flag[10001];
bool cmp(const node a,const node b)
{
	return a.b>b.b;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i].a;
	for(int i=0;i<n;i++)
		cin>>x[i].b;
	sort(x,x+n,cmp);
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int q=0;
		for(int j=x[i].a;j>0;j--)
		{
			if(flag[j]==0)
			{
				flag[j]=1;
				q=1;
				break;
			}
		}
		if(!q)
			cnt+=x[i].b;
	}
	cout<<cnt<<endl;
 	return 0;
}

