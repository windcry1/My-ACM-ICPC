#include <stdio.h>
struct Edge{
	int to,next;
}edge[20010];
int head[10010],tot;
int d[10010],q[10010];
int n,m;
void add_edge(int u,int v){
	edge[++tot].to = v;
	edge[tot].next = head[u];
	head[u] = tot;
}
int top(){
	int t = 0,w = 0,i;
	for(i = 1;i <= n;i++)
		if(!d[i])
			q[w++] = i;
	while(t!=w){
		int u = q[t++];
		for(i = head[u];i;i = edge[i].next){
			int v = edge[i].to;
			d[v]--;
			if(!d[v])
				q[w++] = v;
		}
	}
	for(i = 1;i <= n;i++)
		if(d[i])
			return 0;
	return 1;
}
int main(void){
	scanf("%d %d",&n,&m);
	int i;
	for(i=1;i<=m;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		add_edge(u,v);
		d[v]++;
	}
	printf(top()?"YES\n":"NO\n");
	return 0;
}

