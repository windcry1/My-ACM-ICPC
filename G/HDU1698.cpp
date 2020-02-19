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
struct sut{
	int l,r,sum,lazy;
}tree[400010];
//int a[400040];
void build(int l1,int r1,int x){
	tree[x].l=l1,tree[x].r=r1;
	tree[x].sum=tree[x].r-tree[x].l+1;tree[x].lazy=0;
	if(l1==r1) return;
	int mid=(l1+r1)/2;
	build(l1,mid,x<<1);
	build(mid+1,r1,x<<1|1);
//	tree[x].sum=tree[x<<1].sum+tree[x<<1|1].sum; 
}
void pushdown(int x){
	if(tree[x].lazy){
		tree[x<<1].lazy=tree[x].lazy;
		tree[x<<1|1].lazy=tree[x].lazy;
		tree[x<<1].sum=tree[x].lazy*(tree[x<<1].r-tree[x<<1].l+1);
		tree[x<<1|1].sum=tree[x].lazy*(tree[x<<1|1].r-tree[x<<1|1].l+1);
		tree[x].lazy=0;
	}
}
void update(int l1,int r1,int add,int x){
	if(l1==tree[x].l&&tree[x].r==r1){
		tree[x].sum=add*(tree[x].r-tree[x].l+1);
		tree[x].lazy=add;
		return;
	}
	pushdown(x);
	int mid=(tree[x].r+tree[x].l)/2;
	if(mid>=r1) update(l1,r1,add,x<<1);
	else if(mid<l1) update(l1,r1,add,x<<1|1);
	else{
		update(l1,mid,add,x<<1);
		update(mid+1,r1,add,x<<1|1);
	}
	tree[x].sum=tree[x<<1].sum+tree[x<<1|1].sum; 
}
signed main(){
//	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	scanf("%lld",&t);
	int cas=1;
	while(t--){
		int n;
		scanf("%lld",&n);
		int m;
		scanf("%lld",&m);
		build(1,n,1);
		while(m--){
			int a,b,c;
			scanf("%lld%lld%lld",&a,&b,&c);
			update(a,b,c,1);
		}
		printf("Case %lld: The total value of the hook is %lld.\n", cas++, tree[1].sum);
	} 
    return 0;
}

