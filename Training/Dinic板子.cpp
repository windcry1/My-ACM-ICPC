struct Edge{
	int to,next,val;
}edge[100010];
int head[1010],tot=1,ori,ed;
bool book[1010];
ll dep[1010];
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
	edge[++tot].to=u; edge[tot].val=0; edge[tot].next=head[v]; head[v]=tot; 
}
bool bfs(){
	memset(book,0,sizeof book);
	dep[ori]=1;book[ori]=true;
	queue<int> q;q.push(ori);
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=head[t];i;i=edge[i].next){
			int v=edge[i].to,w=edge[i].val;
			if(w&&!book[v]){
				dep[v]=dep[t]+1;
				book[v]=true;
				q.push(v);
			}
		}
	}
	return book[ed];
}
ll dfs(int x,ll lim){	
	if(x==ed) return lim;
	for(int i=head[x];i;i=edge[i].next){
		int v=edge[i].to;ll w=edge[i].val;
		if(dep[v]==dep[x]+1&&w){
			ll temp=dfs(v,min(w,lim));
			if(temp){
				edge[i].val-=temp;
				edge[i^1].val+=temp;
				return temp;
			}
		}
	}
	return 0;
}
ll dinic(){
	ll res=0;
	while(bfs()){
		ll t=dfs(ori,INF);
		while(t){
			res+=t;
			t=dfs(ori,INF);
		}
	}
	return res;
}
