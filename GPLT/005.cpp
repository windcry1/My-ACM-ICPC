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
struct node{
	ll num;
	int s;
	int t;
}a[1010];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,num;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i].num>>a[i].s>>a[i].t;
		cin>>m;
		while(m--)
		{
			cin>>num;
			for(int i=0;i<n;i++)
			{
				if(a[i].s==num)
					cout<<a[i].num<<' '<<a[i].t<<endl;
			}
		}
	}
	return 0;
}

