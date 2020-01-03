/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 10:24:45 PM
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
const int dir[6][3]={-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
char a[40][40][40];
bool vis[40][40][40];
int n,m,h;
struct node{
	int x,y,z,step;
};
int bfs(int stx,int sty,int stz,int edx,int edy,int edz){
	memset(vis,0,sizeof vis);
	vis[stx][sty][stz]=1;
	queue<node> q;
	node t;t.x=stx;t.y=sty;t.z=stz;t.step=-1;
	q.push(t);
	while(!q.empty()){
		t=q.front();q.pop();
		if(t.x==edx&&t.y==edy&&t.z==edz)
			return t.step;
		for(int i=0;i<6;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1],dz=t.z+dir[i][2];
			if(dx>=0&&dx<h&&dy>=0&&dy<n&&dz>=0&&dz<m&&!vis[dx][dy][dz]&&a[dx][dy][dz]=='*'){
				vis[dx][dy][dz]=1;
				node temp;
				temp.x=dx;temp.y=dy;temp.z=dz;temp.step=t.step+1;
				q.push(temp);
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	while(cin>>n>>m>>h){
		for(int i=0;i<h;i++)
			for(int j=0;j<n;j++)
				for(int k=0;k<m;k++)
					cin>>a[i][j][k];
		cout<<bfs(0,0,0,h-1,n-1,m-1)<<endl;
	}
	return 0; 
}

