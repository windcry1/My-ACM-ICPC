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
vector<int> ve;
int m;
void dfs(int n,int total)
{
	if(total>m)
		return;
	if(total==m)
	{
		for(int i=0;i<ve.size();i++)
		{
			if(i==0)
				cout<<ve[i];
			else cout<<"  "<<ve[i];
		}
		cout<<endl;
		return ;
	}
	for(int i=n;i>=1;i--)
	{
		ve.push_back(i);
		dfs(i,total+i);
		ve.pop_back();
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>m;
	for(int i=m;i>=1;i--)
	{
		ve.clear();
		ve.push_back(i);
		dfs(i,i);
	}
 	return 0;
}

