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
char a[1010][1010];
bool vis[1010][1010];
struct sut{
	int x,y,step;
};
map<pair<int,int>,pair<int,int> > mp;
int x1,y2,n,m;
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int bfs(int x,int y,int step){
	sut st;st.x=x,st.y=y,st.step=0;
	queue<sut> q;
	vis[x][y]=1;
	q.push(st);
	while(!q.empty()){
		sut now=q.front();q.pop();
		if(now.x==x1&&now.y==y2) return now.step; 
		for(int i=0;i<=3;i++){
			sut tmp;
			tmp.x=now.x+dir[i][0];
			tmp.y=now.y+dir[i][1];
		//	cout<<tmp.x<<" "<<tmp.y<<endl;
			if(!vis[tmp.x][tmp.y]&&tmp.x>0&&tmp.x<=n&&tmp.y>0&&tmp.y<=m&&a[tmp.x][tmp.y]=='.'){
				//	cout<<tmp.x<<" "<<tmp.y<<endl;
					pair<int,int> pii=mp[make_pair(tmp.x,tmp.y)];
				if(pii.first!=0||pii.second!=0){
					if(!vis[pii.first][pii.second]&&a[pii.first][pii.second]=='.'&&pii.first>0&&pii.first<=n&&pii.second>0&&pii.second<=m){
						sut now2;now2.x=pii.first;now2.y=pii.second;now2.step=now.step+1;
						vis[pii.first][pii.second]=1;
					//	cout<<pii.first<<" "<<pii.second<<" "<<1<<endl;
						q.push(now2);
					}
					else if(pii.first==x1&&pii.second==y2) return now.step+1;
				}
				else{
					vis[tmp.x][tmp.y]=1;
					tmp.step=now.step+1;
				//	cout<<tmp.x<<" "<<tmp.y<<" "<<2<<endl;
					q.push(tmp);
				}
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			vis[i][j]=0;
		}
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
//		cin>>a[i].x>>a[i].x>>b[i].x>>b[i].y; 
	int b1,b2,c1,c2;
	cin>>b1>>b2>>c1>>c2;
	mp[make_pair(b1,b2)]=make_pair(c1,c2);
	}
	cin>>x1>>y2;
	int t=bfs(1,1,0);
	if(t==-1) cout<<"No solution"<<endl;
	else cout<<t<<endl;
    return 0;
}

