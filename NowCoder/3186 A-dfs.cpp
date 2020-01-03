/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/8/2019 1:01:11 PM
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
int fa[260];
int find(int x){
	while(x!=fa[x]) x=fa[x];
	return x;
}
int uni(int a,int b){
	if(find(a)!=find(b)) fa[find(a)]=find(b);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	for(int i=0;i<260;i++) fa[i]=i;
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		uni(u,v);
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		if(find(i)!=find(1)){
			cout<<i<<endl;
			flag=1;
		}
	}
	if(!flag) cout<<0<<endl;
	return 0;
}

