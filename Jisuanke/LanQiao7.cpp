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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll v[410][410],_map[410][410];
int p[410][410];
ll cnt[4];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n,m,k;ll a,b,c,w;cin>>n>>m>>a>>b>>c>>k>>w;
	for(int i=0;i<k;i++) for(int j=0;j<k;j++) cin>>v[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		cin>>p[i][j];
		if(p[i][j]==1) _map[i][j]=a;
		if(p[i][j]==2) _map[i][j]=b;
		if(p[i][j]==3) _map[i][j]=c;
	}
	int q; cin>>q; for(int i=1;i<=q;i++){
		int id,x,y;cin>>id>>x>>y;
		if(id){
			for(int i=x-k/2;i<=x+k/2;i++){
				for(int j=y-k/2;j<=y+k/2;j++){
					if(i>=1 and i<=n and j>=1 and j<=m){
						ll pre=_map[i][j];
						_map[i][j]=max(_map[i][j]-v[i-(x-k/2)][j-(y-k/2)],0LL);
						cnt[p[i][j]]+=pre-_map[i][j];
					}
				}
			}
		}
		else{
			for(int i=x-k/2;i<=x+k/2;i++){
				for(int j=y-k/2;j<=y+k/2;j++){
					if(i>=1 and j<=n and i>=1 and j<=m){
						for(int k=i-1;k<=i+1;k++){
							for(int l=j-1;l<=j+1;l++){
								if(k>=1 and l<=n and k>=1 and l<=m){
									ll pre=_map[i][j];
									_map[i][j]=max(_map[i][j]-v[i-(x-k/2)][j-(y-k/2)],0LL);
									cnt[p[i][j]]+=pre-_map[i][j];
								}
							}
						}
					}
				}
			}
		}
	}
	ll res=0;
	for(int i=1;i<=3;i++) cout<<cnt[i]<<" \n"[i==3],res+=cnt[i];
	cout<<res<<endl;
	return 0;
}


