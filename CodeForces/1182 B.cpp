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
char a[1010][1010];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int cnt=0;
	int flag=0; 
	for(int i=1;i<n-1;i++)
	{ 
		for(int j=1;j<m-1;j++)
			if(a[i][j-1]=='*'&&a[i-1][j]=='*'&&a[i+1][j]=='*'&&a[i][j+1]=='*'&&a[i][j]=='*')
			{
				flag=1;
				a[i][j]='.';
				for(int k=j-1;k>=0;k--)
				{
					if(a[i][k]=='*')
						a[i][k]='.';
					else break;
				}
				for(int k=j+1;k<m;k++)
				{
					if(a[i][k]=='*')
						a[i][k]='.';
					else break;
				}
				for(int k=i-1;k>=0;k--)
				{
					if(a[k][j]=='*')
						a[k][j]='.';
					else break;
				}
				for(int k=i+1;k<n;k++)
				{
					if(a[k][j]=='*')
						a[k][j]='.';
					else break;
				}
				break;
			}
		if(flag)
			break; 
	}
	if(flag)
	{
		flag=1;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]=='*')
					flag=0;
		cout<<(flag?"YES":"NO")<<endl;
	}
	else cout<<"NO"<<endl;
 	return 0;
}

