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
using namespace std;
const int INF = 0x3f3f3f3f;
map<string,int> mp;
struct sut{
	int to,next;
	double val;
}edge[1010];
int head[1010],cot[1100];
bool vis[1100];
double dir[1100];
int tot=0; 
void add_edge(int u,int v,double w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
int t;
int spfa(int x){
	for(int i=1;i<=t;i++){
		dir[i]=0;vis[i]=0;cot[i]=0;
	}
	dir[x]=1;
	vis[x]=1;
	cot[x]=1;
	queue<int> q;
	q.push(x);
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dir[v]<dir[u]*edge[i].val){
				dir[v]=dir[u]*edge[i].val;
				if(!vis[v]){
					cot[v]++;vis[v]=1;	
					q.push(v);
					if(cot[v]>t) return 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int cas=0;
	while(1){
	mp.clear();
	tot=0;
	memset(head,0,sizeof head);
	cin>>t;
	if(t==0) break;
	for (int i=1;i<=t;i++){	
		string s;
		cin>>s;
		mp[s]=i;
	}
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s1,s2;
		double w;
		cin>>s1>>w>>s2; 
		add_edge(mp[s1],mp[s2],w);
		}
	bool flag=1;
	for(int i=1;i<=t;i++){
		if(spfa(i)) flag=0;
	}
	cout<<"Case "<<++cas<<": "<<(flag==0?"Yes":"No")<<endl;}
    return 0;
}

