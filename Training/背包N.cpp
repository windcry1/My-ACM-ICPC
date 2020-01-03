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
vector<int> v,t;
int n,V,a[21],MAX;
void dfs(int x,int sum)
{
	if(x==n)
	{
		if(sum>MAX&&sum<=V)
		{
			MAX=sum;
			t=v;
		}
		return;
	}
	v.push_back(a[x]);
	dfs(x+1,sum+a[x]);
	v.pop_back();
	dfs(x+1,sum);
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>V)
	{
		cin>>n;
		MAX=-MMAX;
		for(int i=0;i<n;i++)
			cin>>a[i];
		dfs(0,0);
		for(int i=0;i<t.size();i++)
			cout<<t[i]<<" ";
		cout<<"sum:"<<MAX<<endl;
	}
 	return 0;
}

