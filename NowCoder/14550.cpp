/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/9/2019 11:39:29 PM
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
int res,n,m;
struct Edge{
    int to,val,next;
}edge[2010];
int head[1010],tot;
void add_edge(int u,int v,int w){
    edge[++tot].to = v;
    edge[tot].val = w;
    edge[tot].next = head[u];
    head[u] = tot;
}
int dis[1010];
bool vis[1010];
void spfa(int s){
    for(int i=1;i<=n;i++)
        dis[i] = INF,vis[i] = false;
    dis[s] = 0;
    vis[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        vis[u] = false;
        for(int i = head[u];i;i = edge[i].next){
            int v = edge[i].to;
            if(dis[v] > dis[u]+edge[i].val){
                dis[v] = dis[u] + edge[i].val;
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
                //ÅÐ»· 
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(dis[i]<INF)
            ans.push_back(dis[i]);
    }
    if(ans.size()<3) return ;
    sort(ans.begin(),ans.end(),greater<int>());
    res=max(res,ans[0]+ans[1]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int T;cin>>T;while(T--){
        memset(head,0,sizeof head);
        tot=0;
        res=-1;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v,w;cin>>u>>v>>w;
            add_edge(u,v,w);
            add_edge(v,u,w);
        }
        for(int i=1;i<=n;i++) spfa(i);
        cout<<res<<endl;
    }
    return 0;
}
