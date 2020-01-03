#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int a[1010],c[1010],cnt[1010];
int b [1010][1010];
int dis[1010],vis[1010];
const int INF=0x3f3f3f3f;
int spfa(int n,int s){
	memset(vis,0,sizeof vis);
	memset(dis,0,sizeof dis);
	queue<int> q;
	for(int i=1;i<=n;i++){
		vis[i]=0;
		dis[i]=INF;
	}
	dis[s]=0;
	vis[s]=1;
	q.push(s);
	int Min=INF;
	while(!q.empty()){
		int u=q.front();q.pop();
		vis[u]=0;
		for(int i=1;i<=n;i++){
				if(dis[i]>dis[u]+b[u][i]){
					dis[i]=dis[u]+b[u][i];
					Min=min(Min,dis[i]);
					if(!vis[i]){
						vis[i]=1;
						q.push(i);
						cnt[i]++;
						if(cnt[i]>=n) return -1;
					}
					
				}
			}
		}
		return Min;
	}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	int cot=0;
	while(t--){
		cot++;
		int n;cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int m;cin>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			b[u][v]=(a[v]-a[u]);
		}
		int k;cin>>k;
		for(int i=1;i<=k;i++){
			int w;
			cin>>w;
			if(i==1) cout<<"Case:"<<cot<<endl;
			int d=spfa(w,1);
			cout<<((d<3||d==-1)?"?":"d")<<endl;
		}
	}	
    return 0;
}

