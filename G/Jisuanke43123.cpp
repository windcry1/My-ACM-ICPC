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
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f3f3f3f3f;
int n,m;
bool vis1[20010];
int dir1[20010],head1[60010];
bool vis2[20010];
int dir2[20010],head2[60010];
struct sut{
	int to,val,next;
}edge1[60010];
struct node{
	int to,val,next;
}edge2[60010];
int tot1=0,tot2=0;
void add_edge1(int u,int v,int w){
	edge1[++tot1].to=v;
	edge1[tot1].val=w;
	edge1[tot1].next=head1[u];
	head1[u]=tot1;
}
void add_edge2(int u,int v,int w){
	edge2[++tot2].to=v;
	edge2[tot2].val=w;
	edge2[tot2].next=head2[u];
	head2[u]=tot1;
}
int dij1(int x){
	priority_queue<pair<int,int>> q;
	for(int i=1;i<=n;i++) dir1[i]=INF,vis1[i]=0;
	dir1[x]=0;
	q.push(make_pair(-dir1[x],x));
	while(!q.empty()){
		int u=q.top().second;q.pop();
		if(vis1[u]) continue;
		else vis1[u]=1;
		for(int i=head1[u];i;i=edge1[i].next){
			int v=edge1[i].to;
			if(dir1[v]>dir1[u]+edge1[i].val){
				dir1[v]=dir1[u]+edge1[i].val;
				if(!vis1[v]) q.push(make_pair(-dir1[v],v));
			}
		}
	}
//	cout<<1<<endl;
}
int dij2(int x){
	priority_queue<pair<int,int>> q;
	for(int i=1;i<=n;i++) dir2[i]=INF,vis2[i]=0;
	dir2[x]=0;
	q.push(make_pair(-dir2[x],x));
	while(!q.empty()){
		int u=q.top().second;q.pop();
		if(vis2[u]) continue;
		else vis2[u]=1;
		for(int i=head2[u];i;i=edge2[i].next){
			int v=edge2[i].to;
			if(dir2[v]>dir2[u]+edge2[i].val){
				dir2[v]=dir2[u]+edge2[i].val;
				if(!vis2[v]) q.push(make_pair(-dir2[v],v));
			}
		}
	}
//	cout<<2<<endl;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		tot1=0,tot2=0;
		memset(head1,0,sizeof head1);
		memset(head2,0,sizeof head2);
		for(int i=1;i<=m;i++){
			int u,v,c;
			cin>>u>>v>>c;
			add_edge1(u,v,c);
			add_edge2(v,u,c);
		}
		dij1(1); 
		int res=0;
		for(int i=1;i<=n;i++) res+=dir1[i];
		dij2(1);
		for(int i=1;i<=n;i++) res+=dir2[i];
		cout<<res<<endl;
	}
    return 0;
}

