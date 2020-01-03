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
ll a[100010],bit[100010],bit2[100010];
int n,m;
void edit(int pos,ll data){
	for(int i=pos;i<=n;i+=lowbit(i)){
		bit[i]+=data;bit2[i]+=data*pos;
	}
}
void range_edit(int l,int r,ll data){
	edit(l,data);
	edit(r+1,-data);
}
ll getsum(int pos){
	ll ans=0;
	for(int i=pos;i>0;i-=lowbit(i))
		ans+=(pos+1)*bit[i]-bit2[i];
	return ans;
}
ll query(int l,int r){
	return getsum(r)-getsum(l-1);
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>m;
	ll t;
	for(int i=1;i<=n;i++) cin>>t,range_edit(i,i,t);
	while(m--){
		int op;cin>>op;
		if(op==2) {
			int l,r;cin>>l>>r;
			cout<<query(l,r)<<endl;
		}
		else {
			int l,r;ll data;cin>>l>>r>>data;
			range_edit(l,r,data);
		}
	}
	return 0;
}
