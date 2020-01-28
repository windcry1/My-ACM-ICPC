#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int m1[60][60],m2[60][60];
bool vis[60][60][4];
int dir[4][2]={-1,0,1,0,0,-1,0,1};
string s,d[10]={"W","E","S","N"};
int change(string pos){
	if(pos=="W") return 0;
	if(pos=="E") return 1; 
	if(pos=="S") return 2;
	if(pos=="N") return 3;
}
int read(string a,string b){
	if(a[0]==s[0]) return 0;
	if(a[0]=='S'&&(b[0]=='E'||b[0]=='W')) return 1;
	if(a[0]=='S'&&b[0]=='N') return 2;
	if(a[0]=='N'&&(b[0]=='E'||b[0]=='W')) return 1;
	if(a[0]=='N'&&b[0]=='S') return 2;
	if(a[0]=='E'&&(b[0]=='S'||b[0]=='N')) return 1;
	if(a[0]=='E'&&b[0]=='W') return 2;
	if(a[0]=='W'&&(b[0]=='S'||b[0]=='N')) return 1;
	if(a[0]=='W'&&b[0]=='E') return 2;
}
struct node{
	int x,y,k,step;
	string c;
	bool operator < (const node &a)const{
		return step>a.step;
	}
};
int n,m;int x1,y1,x2,y2;
int bfs(int x3,int y3,int k,string d2){
	priority_queue<node> q;
	node a;a.x=x3,a.y=y3;a.c=d2;a.k=0;
	a.step=0;
	vis[x3][y3][change(d2)]=1;
	q.push(a);
	while(!q.empty()){
		node now=q.top();
		q.pop();
		if(now.x==x2&&now.y==y2) return now.step;
		cout<<now.x<<" "<<now.y<<" "<<now.step<<" "<<now.c<<endl;
		for(int i=0;i<=3;i++){
			node temp;
			temp.x=now.x+dir[i][0];
			temp.y=now.y+dir[i][1];
			if(temp.x<=0||temp.y<=0||temp.x>=n||temp.y>=m||vis[temp.x][temp.y][i]||m2[temp.x][temp.y]) continue;
			vis[temp.x][temp.y][i]=1;
			temp.c=d[i];
			if(read(now.c,temp.c)==0){
				if(now.k>=3) {temp.step=now.step+1;temp.k=1;}
				else temp.k=now.k+1,temp.step=now.step;
			}
			else temp.step=now.step+read(now.c,temp.c),temp.k=1;
			q.push(temp); 
		}
	}
	return -1;
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int t;
			cin>>t;
			if(t) m2[i][j]=m2[i+1][j]=m2[i+1][j+1]=m2[i][j+1]=1; 
		}
	}
	n++;m++;
	for(int i=1;i<=n;i++){
		m2[i][1]=1;
		m2[i][m]=1;
	}
	for(int i=1;i<=m;i++){
		m2[1][i]=1;
		m2[n][i]=1;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}
//	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2>>s;
	//x1--,y1--,x2--,y2--;
	x1++,y1++,x2++,y2++;
	cout<<bfs(x1,y1,0,s)<<endl; 
    return 0;
}

