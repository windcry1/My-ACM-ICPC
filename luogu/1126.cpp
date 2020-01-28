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
#define ALL(x) x.begin(),x.end()
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
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
const int dir[4][2]={-1,0,0,-1,1,0,0,1};
bool a[60][60],vis[60][60][4];
int n,m;
struct node{
	int x,y,step,pos;
	node(int _x,int _y,int _step,int _pos):x(_x),y(_y),step(_step),pos(_pos){}
	inline bool operator <(const node &b) const{
		return step>b.step;
	}
};
inline int change(char pos){
	if(pos=='N') return 0;//ио 
	if(pos=='W') return 1;//вС 
	if(pos=='E') return 3;//ср 
	if(pos=='S') return 2;//об 
}
int bfs(int stx,int sty,int edx,int edy,char pos){
	priority_queue<node> q;
	int pos_dir=change(pos);
	vis[stx][sty][pos_dir]=1;
	q.push(node(stx,sty,0,pos_dir));
	while(!q.empty()){
		node t=q.top();q.pop();
		if(t.x==edx and t.y==edy){
			int res=t.step;
			return res;
		}
		for(int i=1;i<=3;i++){
			int dx=t.x+dir[t.pos][0]*i,dy=t.y+dir[t.pos][1]*i;
			if(dx>0 and dx<n and dy>0 and dy<m and !vis[dx][dy][t.pos] and !a[dx][dy]){
				vis[dx][dy][t.pos]=1;
				q.push(node(dx,dy,t.step+1,t.pos));
			}
			else break;
		}
		if(!vis[t.x][t.y][(t.pos+1)%4]){
			vis[t.x][t.y][(t.pos+1)%4]=1;
			q.push(node(t.x,t.y,t.step+1,(t.pos+1)%4));
		}
		if(!vis[t.x][t.y][(t.pos+3)%4]){
			vis[t.x][t.y][(t.pos+3)%4]=1;
			q.push(node(t.x,t.y,t.step+1,(t.pos+3)%4));
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(i nt j=0;j<m;j++){
			bool t;cin>>t;
			if(t) a[i][j]=a[i+1][j]=a[i][j+1]=a[i+1][j+1]=1;
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	int stx,sty,edx,edy;char pos;cin>>stx>>sty>>edx>>edy>>pos;
	cout<<bfs(stx,sty,edx,edy,pos)<<endl;
	return 0;
}

