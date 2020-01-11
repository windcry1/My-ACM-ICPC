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
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int v,p,q;
}a[70];//p value,v cost 
int m,n;
vector<node> att[70],group[70]; 
int dp[32010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].v>>a[i].p>>a[i].q;
		a[i].p*=a[i].v;
		if(a[i].q) att[a[i].q].push_back(node{a[i].v,a[i].p,a[i].q});
	}
	for(int i=1;i<=n;i++){
		if(!a[i].q){
			group[i].push_back(node{a[i].v,a[i].p,a[i].q});
			if(att[i].size()==1)
				group[i].push_back(node{a[i].v+att[i][0].v,a[i].p+att[i][0].p,a[i].q+att[i][0].q});
			if(att[i].size()==2){
				group[i].push_back(node{a[i].v+att[i][0].v,a[i].p+att[i][0].p,a[i].q+att[i][0].q});
				group[i].push_back(node{a[i].v+att[i][1].v,a[i].p+att[i][1].p,a[i].q+att[i][1].q});
				group[i].push_back(node{a[i].v+att[i][0].v+att[i][1].v,a[i].p+att[i][0].p+att[i][1].p,a[i].q+att[i][0].q+att[i][1].q});
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i].q) continue;
		for(int j=m;j>=0;j--){
			for(int k=0;k<group[i].size();k++){
				if(j>=group[i][k].v){
					dp[j]=max(dp[j],dp[j-group[i][k].v]+group[i][k].p);
				}
			}
		}
	}
	cout<<dp[m]<<endl;
	return 0;
}


