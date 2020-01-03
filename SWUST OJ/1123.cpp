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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char ch;
	int n;
	int flag=0;
	while(cin>>ch)
	{
		if(ch=='#')
			break;
		if(!flag)
			flag=1;
		else if(flag)
			cout<<"\r\n";
		cin>>n;
		if(n!=1)
		{
			for(int i=0;i<n-1;i++)
				cout<<" ";
			cout<<ch<<"\r\n";
			for(int i=1;i<n-1;i++)
			{
				for(int j=0;j<n-i-1;j++)
					cout<<" ";
				cout<<ch;
				for(int j=0;j<2*i-1;j++)
					cout<<" ";
				cout<<ch;
				cout<<"\r\n";
			}
			for(int i=0;i<2*n-1;i++)
				cout<<ch;
			cout<<"\r\n";
		}
		else if(n==1)
		{
			cout<<ch<<"\r\n";
		}
	}
 	return 0;
}

