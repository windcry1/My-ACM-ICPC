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
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a[101][101],b[10][10]={0},t,opt=5,c[10][10]={0};
	for(int i=1;i<=15;i++)
		for(int j=1;j<=10;j++)
			cin>>a[i][j];
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
			cin>>b[i][j];
	cin>>t;
	int j;
	for(int i=4;i>=1;i--)
	{
		for(j=1;j<=4;j++)
		{
			if(b[i][j]==1)
				break;
		}
		if(j==5)
			opt=i;
		else break;
	}
	opt--;
	int flag=0;
	for(int i=1;i<=15-opt;i++)
	{
		for(int j=t;j<=t+3;j++)
		{
			for(int k=1;k<=opt;k++)
			{
				if(a[i+k][j]&&b[k][j-t+1])
				{
					flag=1;
					break;
				}
			}
			if(flag) break;
		}
		if(flag)
		{
			for(int k=1;k<=opt;k++)
				for(int j=t;j<=t+3;j++)
					a[k+i-1][j]=(a[k+i-1][j]||b[k][j-t+1]);
			break;
		}
		else if(i==15-opt)
		{
			for(int k=1;k<=opt;k++)
				for(int j=t;j<=t+3;j++)
					a[k+i][j]=(a[k+i][j]||b[k][j-t+1]);
			break;
		}
	}
	for(int i=1;i<=15;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}

