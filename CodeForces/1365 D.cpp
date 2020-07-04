/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
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
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
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
char a[55][55];
bool vis[55][55];
int n,m,cnt,s;
void solve(){
	int n;cin>>n;
	int a[55];
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=3){
		int res=0;
		for(int i=1;i<=n;i++) res|=a[i];
		cout<<res<<endl;
		return ;
	}
	ll res=0;
	vector<ll> v;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			for(int k=j+1;k<=n;k++){
				if(res<(a[i]|a[j]|a[k])){
					res=(a[i]|a[j]|a[k]);
					v.clear();
					v.push_back(i),v.push_back(j),v.push_back(k);
				}
			}
	for(int i=1;i<=n;i++){
		bool f=0;
		for(auto j:v){
			if(i==j) f=1;
		}
		if(f) continue;
		if((res&a[i])==res){
			res=res|a[i];
		}
	}
	cout<<res<<endl;
}
int bfs(){
	queue<pair<int,int> > q;
	memset(vis,0,sizeof vis); 
	cnt=0;s=0;
	if(a[n][m]!='#')
		q.emplace(n,m),vis[n][m]=1; 
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		if(a[t.first][t.second]=='G') s++;
		if(a[t.first][t.second]=='B') cnt++;
		for(int i=0;i<4;i++){
			int tx=t.first+dir[i][0],ty=t.second+dir[i][1];
			if(tx>=1&&ty>=1&&tx<=n&&ty<=m&&!vis[tx][ty]&&a[tx][ty]!='#')
				vis[tx][ty]=1,q.emplace(tx,ty);
		}
	}
	return s;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		cin>>n>>m;
		int cg=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				if(a[i][j]=='G') cg++;
			}
		bfs();
		char tmp[55][55];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				tmp[i][j]=a[i][j];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if(tmp[i][j]=='B'&&vis[i][j]){
					a[i][j]='#';
					for(int k=0;k<4;k++){
						int tx=i+dir[k][0],ty=j+dir[k][1];
						a[tx][ty]='#';
					}
				}
		bfs();
		cout<<(cnt||s!=cg?"No":"Yes")<<endl;
	} 
	return 0;
}


