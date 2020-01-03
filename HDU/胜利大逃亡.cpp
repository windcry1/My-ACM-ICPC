/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/17/2019 7:34:53 PM
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
const int dir[6][3]={-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1};
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
struct vc{
	int x,y;
};
struct node{
	int x,y;
	vector<vc> v;
};
int s[55][55][55];
bool vis[55][55][55];
int res,a,b,c,t;
inline int bfs(int stx,int sty,int stz,int edx,int edy,int edz){
	queue<node> q;
	node t;
	t.x=stx;t.y=sty;t.z=stz;
	vc now;now.x=t.x;now.y=t.y;
	t.v.push_back(now);
	q.push(t);
	while(!q.empty()){
		t=q.front(),q.pop();
		if(t.x==edx&&t.y==edy&&t.z==edz){
		//	res=t.step;
			for(int i=0;i<t.v.size();i++){
				cout<<"("<<t.v[i].x<<", "<<t.v[i].y<<")"<<endl;
			}
			return 0;
		}
		for(int i=0;i<6;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1],dz=t.z+dir[i][2];
			if(dx>=0&&dx<a&&dy>=0&&dy<b&&dz>=0&&dz<c&&!vis[dx][dy][dz]&&!s[dx][dy][dz]){
				vis[dx][dy][dz]=1;
				node temp;temp.x=dx;temp.y=dy;temp.z=dz;
				//temp.step=t.step+1;
				vc now;now.x=temp.x;now.y=temp.y;
				temp.v.push_back(now);
				q.push(temp);
			}
		}
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		memset(vis,0,sizeof vis);
		res=INF;
		cin>>a>>b>>c>>t;
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				for(int k=0;k<c;k++)
					cin>>s[i][j][k];
		if(bfs(0,0,0,a-1,b-1,c-1)) {
			cout<<-1<<endl;
			continue;
		}
		cout<<(res<=t?res:-1)<<endl;
	}
	return 0;
}

