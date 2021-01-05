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
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f3f3f3f3f;
int tree[800010];
int mod;
void update(int l1,int r1,int add,int x,int s){
	if(l1==r1){
		tree[x]=add;
		return;
	}
	int mid=(l1+r1)>>1;
	if(mid>=s) update(l1,mid,add,x<<1,s);
	if(mid<s) update(mid+1,r1,add,x<<1|1,s);
	tree[x]=max(tree[x<<1],tree[x<<1|1])%mod;
}
int query(int ll,int rr,int o,int l,int r)
    {
        if(ll<=l&&rr>=r) return tree[o];
        int mid=(l+r)>>1;
        int a=INF,b=INF;
        if(mid>=ll) a=query(ll,rr,o<<1,l,mid);
        if(mid<rr) b=query(ll,rr,o<<1|1,mid+1,r);
        return max(a,b);
}
int cnt,t;
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;
	scanf("%lld%lld",&n,&mod);
	//memset(tree,0,sizeof tree);
	int t1=n;
	while(t1--){
		char s[2];int x;
		scanf("%s %lld",s,&x);
		if(s[0]=='A'){
			update(1,n,(x+t)%mod,1,cnt+1);
			cnt++;
		}
		cout<<query(1,1,1,1,n)<<endl;
		if(s[0]=='Q'){
			if(x==0) t=0;
			else t=query(cnt-x+1,cnt,1,1,n)%mod;
		//for(int i=1;i<=n;i++) printf("%lld\n",tree[i]);
			//printf("%lld %lld\n",t,cnt); 
		}
		cout<<t<<endl; 
	}
    return 0;
}

