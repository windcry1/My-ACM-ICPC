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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		string s;int n,A,B,C,D;cin>>n>>A>>B>>C>>D>>s;
		int res1=0,res2=0,a=A,b=B,c=C,d=D;
		for(auto i:s){
			if(i=='1'){
				if(c){
					c--; res1++; continue; 
				}
				if(d){
					d--; c++; continue;
				}
				if(a){
					a--; res1++; continue;
				}
				if(b){
					b--; a++; continue;
				}
			}
			if(i=='0'){
				if(d){
					d--; c++; continue;
				}
				if(c) continue;
				if(b){
					b--; a++; continue;
				}
			}
		}
		a=A,b=B,c=C,d=D;
		for(auto i:s){
			if(i=='1'){
				if(d){
					d--; c++; continue;
				}
				if(c){
					c--; res2++; continue; 
				}
				if(b){
					b--; a++; continue;
				}
				if(a){
					a--; res2++; continue;
				}
			}
			if(i=='0'){
				if(!c and d){
					c++; d--; continue;
				}
				if(!a and b){
					b--; a++; continue;
				}
			}
		}
		cout<<res1<<" "<<res2<<endl;
	}
	return 0;
}


