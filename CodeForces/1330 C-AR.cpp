#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+10;
int n,m,l[N],sum,ed,pos,vis[N];
signed main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)	scanf("%lld",&l[i]),sum+=l[i];
	if(sum<n)	return puts("-1"),0;
	for(int i=1;i<=m;i++){
		if(ed+l[i]>n){
			vis[i]=n-l[i]+1;
			for(int j=i-1;j>=1;j--)	if(vis[j+1]<=vis[j]){
				vis[j]=vis[j+1]-1;	if(vis[j]<=0)	return puts("-1"),0;
			}else break;
			ed+=l[i];
		}else{
			vis[i]=ed+1;	ed+=l[i];
		}
	}
	for(int i=1;i<=m;i++)	cout<<vis[i]<<' ';
	puts("");
	return 0;
}

