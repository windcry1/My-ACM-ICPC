#pragma GCC optimize(2)
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5010;
int n,m,vis[N],dst[N],a[N],b[N];
vector<int> v1[N];
int top_sort()
{
	int cnt=0;
	queue<int> q;
	for(int i=1;i<=n;i++)	if(!dst[i])	q.push(i);
	while(q.size())
	{
		int u=q.front();
		cnt++;
		q.pop();
		for(int i=0;i<v1[u].size();i++)
			if(--dst[v1[u][i]]==0)	q.push(v1[u][i]);
	}
	return (n==cnt);
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];	v1[a[i]].push_back(b[i]);	dst[b[i]]++;
	}
	if(top_sort()){
		cout<<1<<endl;
		for(int i=1;i<=m;i++)	cout<<1<<' ';puts("");	return 0;	
	}
	cout<<2<<endl;
	for(int i=1;i<=m;i++){
		if(a[i]>b[i])	cout<<1<<' ';
		else	cout<<2<<' ';
	}
	puts("");
	return 0;
}
 
