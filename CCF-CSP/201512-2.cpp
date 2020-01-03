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
	int n,m;
	int a[31][31];
	while(cin>>n>>m)
	{
		int flag[31][31]={0};
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m-2;j++)
			{
				if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2])
				{
					flag[i][j]=1;flag[i][j+1]=1;flag[i][j+2]=1;
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n-2;j++)
			{
				if(a[j][i]==a[j+1][i]&&a[j][i]==a[j+2][i])
				{
					flag[j][i]=1;flag[j+1][i]=1;flag[j+2][i]=1;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(!flag[i][j])
					cout<<a[i][j]<<' ';
				else
					cout<<'0'<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}

