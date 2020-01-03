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
int a[3010];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int m,n,j=0,t,f=0;
	cin>>m>>n;
	queue<int> q;
	vector<int> v;
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		q.push(t);
	}
	vector<int>::iterator it;
	for(int i=1;i<=m;i++)
	{
		f=0;
		for(it=v.begin();it<v.end();it++)
			if(*it>a[i])
			{
				f=1;
				v.insert(it,a[i]);
				break;
			}
		if(!f)
			v.push_back(a[i]);
		while(q.front()==i)
		{
			q.pop();
			cout<<v[j++]<<endl;
		}
	}
 	return 0;
}

