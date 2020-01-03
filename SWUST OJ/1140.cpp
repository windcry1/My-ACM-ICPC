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
vector<int> ve;
int vis[1001];
void dfs(int x,int y,int n)
{
	if(x==y)
	{
		for(int i=0;i<ve.size();i++)
			cout<<ve[i];
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i]&&a[x][i])
		{
			ve.push_back(i);
			vis[i]=1;
			dfs(i,y,n);
			vis[i]=0;
			ve.pop_back();
		}
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\ \Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,x,y;
	cin>>n>>x>>y;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		istringstream ss(s);
		int temp;
		while(ss>>temp)
			a[i][temp]=1,a[temp][i]=1;
	}
		
//	for(int i=0;i<n;i++)
//		for(int j=0;j<n;j++)
//			cin>>a[i][j];
	vis[x]=1;
	ve.push_back(x);
	dfs(x,y,n);
 	return 0;
}

