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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		int n;cin>>n;
		vector<int> v(n),color(n);
		for(auto &i:v) cin>>i;
		int t=v[0];
		bool flag=0;
		for(auto i:v) if(i!=t) flag=1;
		if(!flag) {
			cout<<1<<endl;
			for(int i=0;i<n;i++) cout<<"1 "; cout<<endl;
			continue;
		}
		if(n%2==0){
			cout<<2<<endl;
			for(int i=1;i<=n/2;i++) cout<<"1 2 "; cout<<endl;
		}
		else{
			for(int i=0;i<v.size()-1;i++){
				if(v[i]==v[i+1]){
					color[i]=color[i+1]=1;
					for(int j=i-1;j>=0;j--) color[j]=3-color[j+1];
					for(int j=i+2;j<n;j++) color[j]=3-color[j-1];
					break;
				}
			}
			if(v[0]==v[n-1]){
				color[0]=color[n-1]=1;
				for(int i=1,j=n-2;i<j;i++,j--) color[i]=color[j]=3-color[i-1];
				color[n/2]=3-color[n/2+1];
			}
			if(*max_element(ALL(color))==0){
				cout<<3<<endl;
				for(int i=1;i<=n/2;i++)cout<<"1 2 ";
				cout<<"3"<<endl;
			}
			else{
				cout<<2<<endl;
				for(auto i:color) cout<<i<<" ";cout<<endl;
			}
		}
	}
	return 0;
}


