/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/4/2019 12:02:01 AM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
struct node{
	int next,v,w;
}edge[20010];
int head[110],dis[110],n,m,cnt;
bool vis[20010];
void add(int u,int v,int w){
	edge[cnt].v=v;
	edge[cnt].next=head[u];
	edge[cnt].w=w;
	head[u]=cnt++;
}
void spfa(int x){
	queue<int> q;
	q.push(x);
	dis[x]=0;vis[x]=1;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		vis[t]=0;
		for(int i=head[t];i!=-1;i=edge[i].next){
			if(dis[edge[i].v]>dis[t]+edge[i].w){
				dis[edge[i].v]=dis[t]+edge[i].w;
				if(!vis[edge[i].v]){
					q.push(edge[i].v);
					vis[edge[i].v]=1;
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n>>m){
		memset(dis,INF,sizeof dis);
		if(n==0&&m==0) break;
		cnt=0;
		memset(head,-1,sizeof head);
		for(int i=0;i<m;i++){
			int u,v,w;cin>>u>>v>>w;
			add(u,v,w);
			add(v,u,w);
		}
		spfa(1);
		cout<<dis[n]<<endl;
	}
	return 0;
}

