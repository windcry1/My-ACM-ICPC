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
const int MMAX=2147483647;
const int mod=1e9+7;
int a[1001][1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		int MIN=MMAX;
		int MAX=-MMAX;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(MIN>a[i][j]&&a[i][j]>0)
					MIN=a[i][j];
				if(MAX<a[i][j])
					MAX=a[i][j];
			}
		cout<<MAX<<endl;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==MAX)
					cout<<"<"<<i<<" "<<j<<">";
			}
		cout<<endl;
		cout<<MIN<<endl;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==MIN)
					cout<<"<"<<i<<" "<<j<<">";
			}
	}
 	return 0;
}

