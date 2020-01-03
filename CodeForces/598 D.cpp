/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/25/2019 10:11:06 PM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){return out<<p.first<<" "<<p.second;}
istream& operator >>(istream &in, pii &p){return in>>p.first>>p.second;}
char a[1010][1010];
int ans[1010][1010];
bool vis[1010][1010];
int n,m,k;
int bfs(int x,int y){
	if(ans[x][y]) return ans[x][y];
	vis[x][y]=1;
	queue<pii> q;
	vector<pii> visited;
	visited.emplace_back(x,y);
	q.emplace(x,y);
	int res=0;
	while(!q.empty()){
		pii t=q.front();q.pop();
		for(int i=0;i<4;i++){
			int dx=t.first+dir[i][0],dy=t.second+dir[i][1];
			if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&!vis[dx][dy]){
				if(a[dx][dy]=='.') {
					vis[dx][dy]=1;
					q.emplace(dx,dy);
					visited.emplace_back(dx,dy);
				}
				else ++res;
			}
		}
	}
	for(auto i:visited) ans[i.first][i.second]=res;
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>m>>k;for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
	while(k--){
		int x,y;cin>>x>>y;
		cout<<bfs(x,y)<<endl;
	}
	return 0;
}

