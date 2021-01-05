#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
#include<cassert>
#include<climits>
#include<list>
#include<vector>
#include<set>
#include<map>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#define lowbit(x) (x &(-x))
using namespace std;
const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);
const double eps=1e-10;
const int M=1e9+7;
const int N=1e5+5;
typedef long long ll;
typedef pair<int,int> PII;
int col[N<<2],sum[N<<2],ass;
void pushdown(int i){
	if(col[i]!=-1){
		col[i<<1]=col[i<<1|1]=col[i];
		col[i]=-1;
	}
}
void updata(int L,int R,int v,int l,int r,int i){
	if(L<=l&&r<=R){
		col[i]=v;
		return ;
	}
	pushdown(i);
	int m=l+((r-l)>>1);
	if(L<=m)
		updata(L,R,v,l,m,i<<1);
	if(m<R)
		updata(L,R,v,m+1,r,i<<1|1);
}
void query(int l,int r,int i){
	if(l==r){
		if(col[i]>=0&&col[i]!=ass)
			sum[col[i]]++;
		ass=col[i];
		return ;
	}
	pushdown(i);
	int m=l+((r-l)>>1);
	query(l,m,i<<1);
	query(m+1,r,i<<1|1);
}
signed main(){
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;
	while(scanf("%d",&n)!=EOF){
		memset(col,-1,sizeof col);
		memset(sum,0,sizeof sum);
		for(int i=0;i<n;i++){
			int x,y,v;
			scanf("%d%d%d",&x,&y,&v);
			updata(x+1,y,v,1,8000,1);
		}
		query(1,8000,1);
		for(int i=0;i<=8000;i++)
			if(sum[i])
				printf("%d %d\n",i,sum[i]);
		printf("\n");
	}
	return 0;
}

