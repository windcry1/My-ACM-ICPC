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
int t1,t2;
int a[10010],vis[10010];
int pre;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	//freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;cin>>n;
	if(n == 1){
		cout << "! 1" << endl;
		return 0;
	}
	cout<<"? 1 2"<<endl;
	cin>>t1;
	cout<<"? 2 1"<<endl;
	cin>>t2;
	if(t1>t2) a[1]=t1,pre=2,vis[t1]=1;
	else a[2]=t2,pre=1,vis[t2]=1;
	for(int i=3;i<=n;i++){
		cout<<"? "<<pre<<" "<<i<<endl;
		cin>>t1;
		cout<<"? "<<i<<" "<<pre<<endl;
		cin>>t2;
		if(t1>t2 and t2!=0) a[pre]=t1,pre=i,vis[t1]=1;
		else a[i]=t2,vis[t2]=1;
	}
	int tt=-1;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			tt=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(!a[i]) a[i]=tt;
	}
	cout<<"! ";
	for(int i=1;i<=n;i++) cout<<a[i]<<" \n"[i==n];
	cout<<endl;
	return 0;
}


