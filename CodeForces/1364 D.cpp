#include<bits/stdc++.h>
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
//#include<algorithm>
using namespace std;
#define int long long
const int maxm=1e5+5;
vector<int>g[maxm];
int pre[maxm],dep[maxm];
int mark[maxm];
int cnt[maxm];
int n,m;
int d;
void dfs(int x){
    mark[x]=1;
    for(int v:g[x]){
        if(!mark[v]){
            dep[v]=dep[x]+1;
            pre[v]=x;
            dfs(v);
        }else{
            if(dep[x]-dep[v]+1>=d){//因为是无向边,所以d[v]-d[x]+1>=d也行
                vector<int>ans;
                int now=x;
                while(now!=v){
                    ans.push_back(now);
                    now=pre[now];
                }
                ans.push_back(v);
                cout<<2<<endl;
                cout<<ans.size()<<endl;
                for(int t:ans){
                    cout<<t<<' ';
                }
                exit(0);
            }
        }
    }
}
signed main(){
    cin>>n>>m;
    d=sqrt(n);
    while(d*d<n)d++;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cnt[dep[i]%(d-1)]++;
    }
    int pos=0;
    for(int i=0;i<=d-2;i++){
        if(cnt[i]>cnt[pos]){
            pos=i;
        }
    }
    cout<<1<<endl;
    int need=d;
    for(int i=1;need;i++){
        if(dep[i]%(d-1)==pos){
            cout<<i<<' ';
            need--;
        }
    }
    return 0;
}
