#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,int> mp;
ll a[510][510];
bool vis[510][510];
int n,idx=0;
ll dfs(int x){
	ll res=0;
	for(int i=1;i<=idx;i++){
		if(a[x][i] && !vis[x][i]){
			vis[x][i]=vis[i][x]=true;
			res+=dfs(i);
			res+=a[x][i];
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		string t1,t2;
		int v1,v2;
		int dis;cin>>t1>>t2>>dis;
		if(mp.count(t1)) v1=mp[t1];
		else v1=++idx,mp[t1]=v1;
		if(mp.count(t2)) v2=mp[t2];
		else v2=++idx,mp[t2]=v2;
		a[v1][v2]=a[v2][v1]=dis;
	}
	ll res=0;
	for(int i=1;i<=idx;i++){
		memset(vis,0,sizeof(vis));
		res = max(res,dfs(i));
	}
	cout<<res<<endl;
	return 0;
}
