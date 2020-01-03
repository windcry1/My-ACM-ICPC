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
const int INF=0x3f3f3f3f;
int a[1010][1010];
int d[1010];
bool vis[1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	int t,q=0;cin>>t;
	while(t--){
		memset(vis,0,sizeof vis);
		q++;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				a[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++){
			int u,v,w; 
			cin>>u>>v>>w;
			a[u][v]=w;
			a[v][u]=w;
		}
		for(int i=1;i<=n;i++){
			d[i]=a[1][i];
			vis[i]=0;
		}
		d[1]=0;
		vis[1]=1;
		for(int i=1;i<=n;i++){
			int u=-1,minx=-1;
			for(int j=1;j<=n;j++){
				if(d[j]>minx&&!vis[j]){
					u=j;
					minx=d[j];
				}
			}
			if(u==-1) break;
			vis[u]=1;
			for(int j=1;j<=n;j++){
				if(!vis[j]&&d[j]<min(d[u],a[u][j])) d[j]=min(d[u],a[u][j]);
			}
		}
		cout<<"Scenario #"<<q<<":"<<endl;
		cout<<d[n]<<endl<<endl;
	}
    return 0;
}

