#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=2e5+10;
int n,m,k,p[N],d[N],res1,res2;
vector<int> g[N],v[N];
void bfs(int s){
	queue<int> q;	q.push(s);	memset(d,-1,sizeof d);	d[s]=0;
	while(q.size()){
		int u=q.front();	q.pop();
	//	cout<<"u = "<<u<<",du = "<<d[u]<<endl; 
		for(auto to:g[u]){
			if(d[to]==-1)	d[to]=d[u]+1,q.push(to);
		}
	}
}
inline int check(int x){
	int cnt=0;
	for(auto to:v[x])	if(d[to]+1==d[x])	cnt++;	
	return cnt>1;
}
signed main(){
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++)	
		scanf("%d %d",&x,&y),g[y].push_back(x),v[x].push_back(y);
	cin>>k;
	for(int i=1;i<=k;i++)	scanf("%d",&p[i]);
	bfs(p[k]);
	
//	for(int i=1;i<=n;i++)	cout<<i<<' '<<d[i]<<endl;
	
	for(int i=1;i<k;i++){
		if(d[p[i+1]]+1==d[p[i]] and check(p[i])) res2++;
		if(d[p[i+1]]+1!=d[p[i]]) res1++,res2++;
//		cout<<"res1 = "<<res1<<",res2 = "<<res2<<endl; 
	}
	cout<<res1<<' '<<res2;
	return 0;
}

