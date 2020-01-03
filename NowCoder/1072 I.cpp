/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 7:16:08 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[5010];
vector<int> v[5010],path[5010];
int p,ns,t;
void bfs()
{
	queue<pii> q;
	q.emplace(1,1);
	path[1].push_back(1);
	while(!q.empty())
	{
		pii temp=q.front();q.pop();
		if(t==temp.first)
		{
			cout<<temp.second<<endl;
			for(auto i:path[temp.first])
				cout<<i<<endl;
			return ;
		}
		for(auto i:v[temp.first])
		{
			path[i]=path[temp.first];
			path[i].push_back(i);
			q.emplace(i,temp.second+1);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>p>>ns>>t;
	for(int i=0;i<ns;i++)
	{
		int n,b1,b2;
		cin>>n>>b1>>b2;
		v[n].push_back(b1);
		v[n].push_back(b2);
	}
	bfs();
	return 0;
}

