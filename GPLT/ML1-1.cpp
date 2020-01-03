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
int a[1000001][3]={0};
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,temp;
	string s;
	while(cin>>n)
	{
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			if(t==1)
				for(int j=0;j<t;j++)
					cin>>temp;
			else
				for(int j=0;j<t;j++)
				{
					cin>>temp;
					a[temp][0]++;
				}
		}
		cin>>m;
		int flag=0;
		for(int i=0;i<m;i++)
		{
			cin>>s;
			istringstream ss(s);
			ss>>temp;
			if(!a[temp][1]&&!a[temp][0])
			{
				a[temp][1]=1;
				if(!flag)
				{
					cout<<s;
					flag=1;
				}
				else cout<<" "<<s;
			}
		}
		if(!flag)
			cout<<"No one is handsome"<<endl;
		else cout<<endl;
	}
 	return 0;
}

