/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/19/2019 4:48:24 PM
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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls(u) u<<1
#define rs(u) u<<1|1
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
int n;
ll a[50010];
struct Tree{
	int l,r;
	ll sum;
}tree[50010<<2];
void build(int u,int l,int r){
	tree[u].l=l;
	tree[u].r=r;
	if(l==r){
		tree[u].sum=a[l];
    	return;
	}
	int mid=(l+r)>>1;
	build(ls(u),l,mid);
   	build(rs(u),mid+1,r);
	tree[u].sum=tree[ls(u)].sum+tree[rs(u)].sum;
}
void update(int u,int pos,int val){
	if(tree[u].l==tree[u].r){
  		tree[u].sum+=val;
		return ;
	}
  	int mid=(tree[u].l+tree[u].r)>>1;
  	if(pos<=mid) update(ls(u),pos,val);
  	else update(rs(u),pos,val);
  	tree[u].sum=tree[ls(u)].sum+tree[rs(u)].sum;
}
ll query(int u,int l,int r){
	if(tree[u].l==l&&tree[u].r==r) return tree[u].sum;
	int mid=(tree[u].l+tree[u].r)>>1;
	if(r<=mid) return query(ls(u),l,r);
	else if(mid<l) return query(rs(u),l,r);
	else return query(ls(u),l,mid)+query(rs(u),mid+1,r);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		cin>>n;
   		for(int i=1;i<=n;i++) cin>>a[i];
   		build(1,1,n);
   		cout<<"Case "<<cas<<":"<<endl;
   		string s;
   		while(cin>>s&&s!="End"){
   			int x,y;cin>>x>>y;
	 		if(s=="Add") update(1,x,y);
	 		if(s=="Sub") update(1,x,-y);
	 		if(s=="Query") cout<<query(1,x,y)<<endl;
		}
	}
	return 0;
}
