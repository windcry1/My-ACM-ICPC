/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/20/2019 4:06:43 PM
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
#define ls u<<1
#define rs u<<1|1
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
int fa[100010];
int find(int x){
	int temp=x;
	while(fa[x]!=x){
		x=fa[x];
	}
	while(fa[temp]!=x){
		int t=fa[temp];
		fa[temp]=x;
		temp=t;
	}
	return x;
}
int join(int a,int b){
	int t1=find(a),t2=find(b);
	if(t1!=t2) fa[t1]=fa[t2];
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		join(u,v);
	}
	int q;cin>>q;
	while(q--){
		int u,v;cin>>u>>v;
		cout<<(find(u)==find(v)?"Yes":"No")<<endl;
	}
	return 0;
}

