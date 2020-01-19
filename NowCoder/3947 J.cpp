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
const int dir[6][3]={-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1};
char a[110][110][110];
bool vis[110][110][110];
struct node{
	int x,y,z,step;
};
int bfs(int x1,int y1,int z1,int x2,int y2,int z2,int n){
	vis[x1][y1][z1]=1;
	queue<node> q;
	q.push(node{x1,y1,z1,1});
	while(!q.empty()){
		node t=q.front(); q.pop();
	#ifdef WindCry1
		cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
	#endif
		if(t.x==x2 and t.y==y2 and t.z==z2) return t.step;
		for(int i=0;i<6;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1],dz=t.z+dir[i][2];
			if(dx>=1 and dx<=n and dy>=1 and dy<=n and dz>=1 and dz<=n and !vis[dx][dy][dz] and a[dx][dy][dz]=='.'){
				vis[dx][dy][dz]=1;
				q.push(node{dx,dy,dz,t.step+1});
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) for(int k=1;k<=n;k++) cin>>a[i][j][k];
	#ifdef WindCry1
		for(int i=1;i<=n;i++) {for(int j=1;j<=n;j++) {for(int k=1;k<=n;k++) cout<<a[i][j][k];cout<<endl;}cout<<endl;}
	#endif
	cout<<bfs(1,1,1,n,n,n,n)<<endl;
	return 0;
}


