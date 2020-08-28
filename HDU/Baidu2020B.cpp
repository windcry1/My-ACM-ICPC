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
double judge(int s){
	if(s>=95 and s<=100) return 4.3;
	if(s>=90 and s<=94) return 4.0;
	if(s>=85 and s<=89) return 3.7;
	if(s>=80 and s<=84) return 3.3;
	if(s>=75 and s<=79) return 3.0;
	if(s>=70 and s<=74) return 2.7;
	if(s>=67 and s<=69) return 2.3;
	if(s>=65 and s<=66) return 2.0;
	if(s>=62 and s<=64) return 1.7;
	if(s>=60 and s<=61) return 1.0;
	if(s>=0 and s<=59) return 0.0;
}
template<typename T,typename ...Args> double judge(T s,Args ...args){
	return judge(s)+judge(args...);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;for(cin>>T;T;T--){
		int x;cin>>x;
		int book[11]={95,90,85,80,75,70,67,65,62,60,0};
		double res=0;
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				for(int k=0;k<11;k++){
					for(int l=0;l<11;l++){
						if(book[i]+book[j]+book[k]+book[l]<=x)
							res=max(res,judge(book[i],book[j],book[k],book[l]));
					}
				}
			}
		}
		cout<<fixed<<setprecision(1)<<res<<endl;
	} 
	return 0;
}


