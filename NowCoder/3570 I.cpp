/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/28/2019 1:43:14 PM
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
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct point{
	ll x;
	ll y;
}p[4010<<1];
ll direct(point i,point j,point k){
	return (k.x-i.x)*(j.y-i.y)-(j.x-i.x)*(k.y-i.y);
}
bool onsegment(point a,point b,point c){
	ll minx=min(a.x,b.x);
	ll maxx=max(a.x,b.x);
	ll miny=min(a.y,b.y);
	ll maxy=max(a.y,b.y);
	return c.x>=minx&&c.x<=maxx&&c.y>=miny&&c.y<=maxy;
}
bool judge(ll a,ll b){
	if(a<0&&b>0) return true;
	if(a>0&&b<0) return true;
	return false;
}
bool f(point p1,point q1,point p2,point q2){
	ll d1=direct(p2,q2,p1);        
	ll d2=direct(p2,q2,q1);
	ll d3=direct(p1,q1,p2);
	ll d4=direct(p1,q1,q2);
	if(judge(d1,d2)&&judge(d3,d4)) return true;
	if(d1==0&&onsegment(p2,q2,p1)) return true;
	if(d2==0&&onsegment(p2,q2,q1)) return true;
	if(d3==0&&onsegment(p1,q1,p2)) return true;
	if(d4==0&&onsegment(p1,q1,q2)) return true;
	return false;
}
int fa[4010];
int find(int x){
	int tmp=x;
	while(fa[x]!=x)
		x=fa[x];
	while(fa[tmp]!=x){
		int t=fa[tmp];
		fa[tmp]=x;
		tmp=fa[tmp];
	}
	return x;
}
void join(int a,int b){
	int t1=find(a),t2=find(b);
	if(t1!=t2) fa[t1]=fa[t2];
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i].x>>p[i].y>>p[i+n].x>>p[i+n].y,fa[i]=i;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(f(p[i],p[i+n],p[j],p[j+n]))
				join(i,j);
	int res=0;
	for(int i=1;i<=n;i++) res+=(fa[i]==i);
	cout<<res<<endl;
	return 0;
}

