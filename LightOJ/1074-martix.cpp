/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/10/2019 10:15:15 PM
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
int _map[210][210];
int cnt[210],tot,n,m;
bool vis[210],fail[210];
int a[210],dis[210];
void dfs(int s){
	fail[s] = true;
	for(int i = 1;i <= n;i++)
		if(_map[s][i]!=INF&&!fail[i])
			dfs(i);
}
void spfa(int s){
	for(int i=1;i<=n;i++)
        dis[i] = INF,vis[i] = false,cnt[i] = 0,fail[i] = false;
    dis[s] = 0;
    cnt[s] = 1;
    vis[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        vis[u] = false;
        for(int i = 1;i <= n;i++){
            if(fail[i]||_map[u][i]==INF) continue;
            if(dis[i] > dis[u] + _map[u][i]){
                dis[i] = dis[u] + _map[u][i];
                if(!vis[i]){
                    vis[i] = true;
                    cnt[i]++;
                    q.push(i);
					if(cnt[i]>n)
                    	dfs(i);
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
	int T;cin>>T;
	for(int cas=1;cas<=T;cas++){
		memset(_map,INF,sizeof _map);
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cin>>m;
		for(int i=1;i<=m;i++){
			int u,v;cin>>u>>v;
			_map[u][v]=(a[v]-a[u])*(a[v]-a[u])*(a[v]-a[u]);
		}
		spfa(1);
		int q;cin>>q;
		cout<<"Case "<<cas<<":"<<endl;
		while(q--){
			int u;cin>>u;
			if(fail[u]||dis[u]<3||dis[u]==INF)
				cout<<"?"<<endl;
			else cout<<dis[u]<<endl;
		}
	} 
	return 0;
}

