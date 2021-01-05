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
const int INF = 0x3f3f3f3f;
const int maxn=1000010;
int a[maxn];
int mod;
struct sut{
	int l,r,sum,ml,pl;
}tree[maxn<<2];
void build(int l1,int r1,int x){
	tree[x].l=l1,tree[x].r=r1,tree[x].pl=0;tree[x].ml=1;
	if(l1==r1){
		tree[x].sum=a[l1]%mod;
		return;
	}
	int mid=(l1+r1)>>1;
	build(l1,mid,x<<1);
	build(mid+1,r1,x<<1|1);
	tree[x].sum=(tree[x<<1].sum+tree[x<<1|1].sum)%mod; 
}
void pushdown(int x){
	tree[x<<1].ml=(tree[x].ml*tree[x<<1].ml)%mod;
	tree[x<<1|1].ml=(tree[x].ml*tree[x<<1|1].ml)%mod;
	tree[x<<1].pl=(tree[x<<1].pl*tree[x].ml+tree[x].pl)%mod;
	tree[x<<1|1].pl=(tree[x<<1|1].pl*tree[x].ml+tree[x].pl)%mod;
	tree[x<<1].sum=(tree[x].ml*tree[x<<1].sum+tree[x].pl*(tree[x<<1].r-tree[x<<1].l+1)%mod)%mod;
	tree[x<<1|1].sum=(tree[x].ml*tree[x<<1|1].sum+tree[x].pl*(tree[x<<1|1].r-tree[x<<1|1].l+1)%mod)%mod;
	tree[x].pl=0;tree[x].ml=1;	
}
void update_pl(int l1,int r1,int add,int x){
	if(l1<=tree[x].l&&tree[x].r<=r1){
		tree[x].pl=(tree[x].pl+add)%mod;
		tree[x].sum=(tree[x].sum+add*(tree[x].r-tree[x].l+1)%mod)%mod;
		return;
	}
	pushdown(x);
	int mid=(tree[x].l+tree[x].r)>>1;
	if(l1<=mid) update_pl(l1,r1,add,x<<1);
	if(mid<r1) update_pl(l1,r1,add,x<<1|1);
	tree[x].sum=(tree[x<<1].sum+tree[x<<1|1].sum)%mod; 
}
void update_mul(int l1,int r1,int add,int x){
	if(l1<=tree[x].l&&tree[x].r<=r1){
		tree[x].ml=(tree[x].ml*add)%mod;
		tree[x].pl=(tree[x].pl*add)%mod;	
		tree[x].sum=(tree[x].sum*add)%mod;
		return;
	}
	pushdown(x);
	int mid=(tree[x].l+tree[x].r)>>1;
	if(l1<=mid) update_mul(l1,r1,add,x<<1);
	if(mid<r1) update_mul(l1,r1,add,x<<1|1);
	tree[x].sum=(tree[x<<1].sum+tree[x<<1|1].sum)%mod; 
}
int query(int l1,int r1,int x){
	int res=0;
	if(l1<=tree[x].l&&tree[x].r<=r1){
		return tree[x].sum%mod;
	}
	pushdown(x);
	int mid=(tree[x].l+tree[x].r)>>1;
	if(l1<=mid) res=(res+query(l1,r1,x<<1))%mod;
	if(mid<r1) res=(res+query(l1,r1,x<<1|1))%mod;
	tree[x].sum=(tree[x<<1].sum+tree[x<<1|1].sum)%mod;
	return res;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,m;
	cin>>n;cin>>mod;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,n,1);
	cin>>m;
	while(m--){
		int a1;
		cin>>a1;
		if(a1==1){
			int b,d,e;
			cin>>b>>d>>e;
			update_mul(b,d,e,1);
		}
		else if(a1==2){
			int b,d,e;
			cin>>b>>d>>e;
			update_pl(b,d,e,1);	
		}
		else {
			int x,y;
			cin>>x>>y;
			cout<<query(x,y,1)<<endl;
		}
	}
    return 0;
}

