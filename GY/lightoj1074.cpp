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
int a[300];
int b[300][300];
bool vis[300][300];
int m,n,w=0;
const int INF=0x3f3f3f3f;
int main(){
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		memset(vis,0,sizeof vis);
		w++;
		cin>>n; 
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) b[i][j]=INF;
				else b[i][j]=INF;
			}
		}
		cin>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			b[u][v]=(a[v]-a[u])*(a[v]-a[u])*(a[v]-a[u]);
			if(b[u][v]<0) vis[u][v]=1;
		}
		int q;cin>>q;
		for(int k=1;k<=n;k++){
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						if(vis[i][k]||vis[k][j]) continue; 
						b[i][j]=min(b[i][j],b[i][k]+b[k][j]);
					}
				}
			}
		cout<<"Case "<<w<<":"<<endl;
		for(int c=1;c<=q;c++){
			int x;
			cin>>x;	
			if(b[1][x]>=3&&b[1][x]<INF) cout<<b[1][x]<<endl;
			else cout<<"?"<<endl;
		}
	}
    return 0;
}

