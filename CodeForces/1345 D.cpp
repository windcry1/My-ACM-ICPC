 /*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
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
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int n,m;
char a[1010][1010];
bool judge(){
	bool flag1=0,flag2=0;
	for(int i=0;i<n;i++){
		vector<int> ans;
		for(int j=0;j<m;j++){
			if(a[i][j]=='#'){
				if(!ans.empty() and j!=ans.back()+1) return 1;
				ans.push_back(j);
			}
		}
		if(ans.empty()) flag1=1;
	}
	for(int j=0;j<m;j++){
		vector<int> ans;
		for(int i=0;i<n;i++){
			if(a[i][j]=='#'){
				if(!ans.empty() and i!=ans.back()+1) return 1;
				ans.push_back(i);
			}
		}
		if(ans.empty()) flag2=1;
	}
	return (flag1^flag2);
}
void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int dx=dir[i][0]+x,dy=dir[i][1]+y;
		if(dx>=0 and dx<n and dy>=0 and dy<m and a[dx][dy]=='#'){
			a[dx][dy]='.';
			dfs(dx,dy);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
	if(judge()) return cout<<-1<<endl,0;
	int res=0;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++)
		if(a[i][j]=='#') dfs(i,j),++res;
	cout<<res<<endl;
	return 0;
}


