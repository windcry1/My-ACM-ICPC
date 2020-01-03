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
#include<map>
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
int a[51000];
bool flag[110000];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			flag[a[i]]=1;
		}
		sort(a,a+n);
		int cnt=0;
		for(int i=0;i<n/2;i++)
			for(int j=a[i];j<=2*n;j++)
				if(!flag[a[j]]&&)
				{
					flag[a[j]]=1;
					cnt++;
				}
		for(int i=n-1;i>=n/2;i--)
			for(int j=2*n;j>=a[i];j--)
				if(!flag[a[j]])
				{
					flag[a[j]]=1;
					cnt++;
				}
		cout<<cnt<<endl;
	}
	return 0;
}

