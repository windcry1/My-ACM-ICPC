//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
int a[100010],sum[100010];
map<int,int> ma;
priority_queue<int> pq;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ma[a[i]]++;
	}
	map<int,int>::const_iterator it;
	int k=0;
	for(it=ma.begin();it!=ma.end();it++)
		pq.push((*it).second);
	int res=0;
	while(pq.size()>=3)
	{
		int a=pq.top();
		pq.pop();
		int b=pq.top();
		pq.pop();
		int c=pq.top();
		pq.pop();
		res++;
		a--;b--;c--;
		if(a)pq.push(a);
		if(b)pq.push(b);
		if(c)pq.push(c);
	}
	cout<<res<<endl;
 	return 0;
}

