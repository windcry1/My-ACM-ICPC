#pragma GCC optimize(2)
#include<bits/stdc++.h>
#include<ext/rope>
using namespace std;
using namespace __gnu_cxx;
#define LL long long
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
const int MAXN = 1e5+10;
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
struct node{ int l,r,tag; }t[MAXN<<2];
int v[MAXN],w[MAXN],a[MAXN];
LL dp[MAXN],ans,sum=0;
void build(int rt,int l,int r){
    t[rt].l=l; t[rt].r=r; t[rt].tag=INF;
    if(l==r) return;
    int mid=(l+r)>>1;
    build(rt<<1,l,mid); build(rt<<1|1,mid+1,r);
}
inline void pushdown(int rt){
    t[rt<<1].tag = min(t[rt].tag,t[rt<<1].tag);
    t[rt<<1|1].tag = min(t[rt].tag,t[rt<<1|1].tag);
}
void update(int rt,int l,int r,int v){
    if(l<=t[rt].l && t[rt].r<=r){ t[rt].tag = min(t[rt].tag,v); return; }
    int mid = (t[rt].l+t[rt].r)>>1;
    if(l<=mid) update(rt<<1,l,r,v);
    if(r>mid) update(rt<<1|1,l,r,v);
}
int query(int rt,int pos){
    if(t[rt].l==t[rt].r && t[rt].l==pos) return t[rt].tag;
    pushdown(rt);
    int mid = (t[rt].l+t[rt].r)>>1;
    if(pos<=mid) return query(rt<<1,pos);
    else return query(rt<<1|1,pos);
}
signed main(){
#ifdef WindCry1
    freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif // ONLINE_JUDGE
    int n,m,cnt=0,W;
    scanf("%d%d%d",&n,&W,&m);
    build(1,1,n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),sum+=a[i];
    for(int i=1,l,r,v;i<=m;i++) scanf("%d%d%d",&l,&r,&v),update(1,l,r,v);
    for(int i=1;i<=n;i++) cout<<query(1,i)<<endl;
    for(int i=1;i<=n;i++){
        if(a[i]<0){
            v[cnt]=-a[i]; w[cnt]=query(1,i); ++cnt;
        }
    }
    for(int i=0;i<cnt;i++)
        for(int j=W;j>=w[i];j--)
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
    cout<<dp[W]+sum<<'\n';
    return 0;
}
