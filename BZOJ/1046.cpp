/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
//#pragma GCC diagnostic error "-std=c++11"
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
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
const int INT_MIN=-2147483647; 
int bit[10010],n;
struct node{
	int pos;
	int data;
	inline bool operator <(const node &a) const{
		return data>a.data;
	}
}a[10010],b[10010];
int dp[10010],r[10010];
void edit(int pos,int data){
	for(int i=pos;i<=n;i+=lowbit(i)) bit[i]=max(bit[i],data);
}
int query(int pos){
	int res=0;
	for(int i=pos;i;i-=lowbit(i)) res=max(res,bit[i]);
	return res;
}
void solve(int x){
	int w=x,u=INT_MIN,ans[n+10];
	ans[0]=0;
	for(int i=1;i<=n;i++)
		if(dp[i]>= w and b[i].data>u){
		ans[++ans[0]]=b[i].data;
		u=b[i].data,w--;
	}
	if(ans[0]>=x) for(int i=1;i<=x;i++)cout<<ans[i]<<" \n"[i==x];
	else cout <<"Impossible"<<endl;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n;for(int i=1;i<=n;i++) cin>>a[i].data,a[i].pos=i,b[i]=a[i];
	sort(a+1,a+1+n);
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(i==1 or a[i].data!=a[i-1].data) ++tmp;
		r[a[i].pos]=tmp;
	}
	for(int i=n;i;i--){
		dp[i]=query(r[i]-1)+1;
		edit(r[i],dp[i]);
	}
	int q;cin>>q;while(q--){
		int t;cin>>t;
		solve(t);
	}
	return 0;
}


