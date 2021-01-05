
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
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
const int INF=0x3f3f3f3f;
int a[1100][1100];
bool vis1[1100],vis2[1100];
int dir1[1100],dir2[1100];
int main(){
	ios::sync_with_stdio(false);
	int n,m,x;
	cin>>n>>m>>x;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) a[i][j]=0;
			else a[i][j]=INF;
		}
	}
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		a[u][v]=min(a[u][v],w);
	}
	for(int i=1;i<=n;i++){
		dir1[i]=a[x][i];
		dir2[i]=a[i][x];
		vis1[i]=0;vis2[i]=0;
	}
	dir1[x]=0;dir2[x]=0;
	vis1[x]=1,vis2[x]=1;
	for(int i=1;i<n;i++){
		int u,minx=INF;
		for(int j=1;j<=n;j++){
			if(dir1[j]<minx&&!vis1[j]){
				u=j;
				minx=dir1[j];
			}
		}
		vis1[u]=1;
		for(int j=1;j<=n;j++){
			if(dir1[j]>dir1[u]+a[u][j]&&!vis1[j]){
				dir1[j]=dir1[u]+a[u][j];
			}
		}
	}
	for(int i=1;i<n;i++){
		int u,minx=INF;
		for(int j=1;j<=n;j++){
			if(dir2[j]<minx&&!vis2[j]){
				u=j;
				minx=dir2[j];
			}
		}
		vis2[u]=1;
		for(int j=1;j<=n;j++){
			if(dir2[j]>dir2[u]+a[j][u]&&!vis2[j]){
				dir2[j]=dir2[u]+a[j][u];
			}
		}
	}
	int res=0;
	for(int i=1;i<=n;i++){
		res=max(res,dir1[i]+dir2[i]);
	}
	cout<<res<<endl;
    return 0;
}

