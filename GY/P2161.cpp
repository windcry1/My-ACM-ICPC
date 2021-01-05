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
const int N=200010;
int cnt,ans;
struct sut{
	int l,r,tag,sum;
}tree[N<<2];
int vis[N];
void build(int l1,int r1,int x){
	tree[x].l=l1,tree[x].r=r1;tree[x].tag=0;tree[x].sum=0;
	if(l1==r1) return;
	int mid=(l1+r1)>>1;
	build(l1,mid,x<<1);
	build(mid+1,r1,x<<1|1);
}
void pushdown(int x){
	if(!tree[x].tag) return;
		tree[x<<1].tag=tree[x<<1|1].tag=tree[x].tag;
		tree[x<<1].sum=tree[x<<1|1].sum=tree[x].tag;
		tree[x].tag=0;
}
void update(int l1,int r1,int add,int x){
	if(l1<=tree[x].l&&tree[x].r<=r1){
		tree[x].tag=add;
		tree[x].sum=add;
	}
	else{
		pushdown(x);
		int mid=(tree[x].l+tree[x].r)>>1;
		if(l1<=mid) update(l1,mid,add,x<<1);
		if(r1>mid) update(mid+1,r1,add,x<<1|1);
		if(tree[x<<1].sum==tree[x<<1|1].sum) tree[x].sum=tree[x<<1].sum;
		else tree[x].sum=-1;
	}
}
void query(int l1,int r1,int x){
	if(l1<=tree[x].l&&tree[x].r<=r1){
		if(!tree[x].sum) return;
		if(tree[x].sum==-1){
			pushdown(x);
			int mid=(tree[x].l+tree[x].r)>>1;
			if(l1<=mid) query(l1,mid,x<<1);
			if(r1>mid) query(mid+1,r1,x<<1|1);
		}
		if(tree[x].sum>0){
			if(!vis[tree[x].sum]){
				ans--,cnt++;vis[tree[x].sum]=1;
			}
		}
	}
	else{
		pushdown(x);
		int mid=(tree[x].l+tree[x].r)>>1;
		if(l1<=mid) query(l1,mid,x<<1);
		if(r1>mid) query(mid+1,r1,x<<1|1);}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	build(1,100000,1);
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s[0]=='A'){
			int a,b;
			cin>>a>>b;
			query(a,b,1);
			cout<<cnt<<endl;
			cnt=0;
			update(a,b,i,1);
			ans++;
		}
		if(s[0]=='B'){
			cout<<ans<<endl;
		}
	}
    return 0;
}

