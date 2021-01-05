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
int n,m,bit[200010],a[200010];
inline int lowbit(int x){
	return (-x)&x;
}
void edit(int pos){
	for(int i=pos;i<=n;i+=lowbit(i)){
		bit[i]=a[i];
		int xl=lowbit(i);
		for(int j=1;j<xl;j<<=1){
			bit[i]=max(bit[i],bit[i-j]);
		}
	}
}
int query(int x,int y){
	int ans=0;
	while(y>=x){
		ans=max(a[y],ans);
		y--;
		for(;y-lowbit(y)>=x;y-=lowbit(y)) ans=max(ans,bit[y]);
	}
	return ans;
}
signed main(){
	//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	while(~scanf("%lld %lld",&n,&m)){
		memset(bit,0,sizeof bit);
		for(int i=1;i<=n;i++){
			scanf("%lld",&a[i]);
			edit(i);
		}
		for(int i=1;i<=m;i++){
			char c;
			scanf("%c",&c);
			scanf("%c",&c);
			if(c=='Q'){
				int a1,b;
				scanf("%lld %lld",&a1,&b); 
				printf("%lld\n",query(a1,b));
			}
			if(c=='U'){
				int a1,b;
				scanf("%lld %lld",&a1,&b); 
				a[a1]=b;
				edit(a1);
			}
		}
	}
    return 0;
}

