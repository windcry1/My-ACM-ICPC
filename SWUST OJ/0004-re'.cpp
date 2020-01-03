/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/1/2019 12:34:36 AM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
char s[110][110];
bool vis[110][110];
int n,m;
int res=0;
struct node{
	int x,y,step;
};
bool judge(int x,int y){
	if(x<0||x>=n||y<0||y>=m) return false;
	if(s[x][y]=='#'||vis[x][y]) return false;
	return true;
}
int bfs(int stx,int sty){
	queue<node> q;
	q.push(node{stx,sty,0});
	vis[stx][sty]=true;
	while(!q.empty()){
		node t=q.front();q.pop();
		if(s[t.x][t.y]=='E') {
			return t.step;
		}
		for(int i=0;i<4;i++){
			int dx=dir[i][0]+t.x;
			int dy=dir[i][1]+t.y;
			if(judge(dx,dy)){
				q.push(node{dx,dy,t.step+1});
				vis[dx][dy]=true;
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		cin>>n>>m;
		int stx,sty;
		memset(vis,0,sizeof vis);
		res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>s[i][j];
				if(s[i][j]=='S') stx=i,sty=j;
			}
		}
		cout<<bfs(stx,sty)<<endl;
	}
	return 0;
}

