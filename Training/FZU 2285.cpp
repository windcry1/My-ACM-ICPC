/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/17/2019 12:48:38 PM
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
char a[1010][1010];
int n;
bool vis[1010][1010];
struct node{
	int x,y,step;
};
int bfs(int stx,int sty,int edx,int edy){
	queue<node> q;
	node t;t.x=stx;t.y=sty;t.step=0;
	q.push(t);
	vis[stx][sty]=1;
	while(!q.empty()){
		t=q.front();q.pop();
		if(t.x==edx&&t.y==edy) return t.step;
		for(int i=0;i<4;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=0&&dx<n&&dy>=0&&dy<n&&!vis[dx][dy]&&a[dx][dy]!='#'){
				node temp;
				temp.x=dx;temp.y=dy;temp.step=t.step+1;
				q.push(temp);
				vis[dx][dy]=1;
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
	while(cin>>n){
		memset(vis,0,sizeof vis);
		int stx,sty,edx,edy;
		for(int i=0;i<n;i++){
			cin>>a[i];
			for(int j=0;j<n;j++){
				if(a[i][j]=='S') stx=i,sty=j;
				if(a[i][j]=='E') edx=i,edy=j;
			}
		}
		cout<<bfs(stx,sty,edx,edy)<<endl;
	}
	return 0;
}

