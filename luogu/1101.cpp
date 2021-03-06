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
const int dir[8][2]={-1,0,1,0,0,-1,0,1,-1,-1,-1,1,1,-1,1,1};
char a[110][110];
bool vis[110][110];
string s="yizhong";
int n;
bool dfs(int x,int y,int d,int pos){
	if(pos==(int)s.size()) return 1;
	int dx=x+dir[d][0],dy=y+dir[d][1];
	if(dx<0 or dx>=n or dy<0 or dy>=n) return 0;
	if(s[pos]==a[dx][dy]){
		if(dfs(dx,dy,d,pos+1)){
			vis[dx][dy]=1;
			return 1;
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++){
		if(a[i][j]=='y'){
			for(int k=0;k<8;k++){
				if(dfs(i,j,k,1))
					vis[i][j]=1;
			}
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			if(vis[i][j]) cout<<a[i][j];
			else cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}


