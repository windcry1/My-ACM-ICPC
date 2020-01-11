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
int a,b,c;
inline bool cal(int x,int y,int z){
	bool flag[10]={0};
	while(x){
		if(!flag[x%10]) flag[x%10]=1;
		else return false;
		x/=10;
	}
	while(y){
		if(!flag[y%10]) flag[y%10]=1;
		else return false;
		y/=10;
	}
	while(z){
		if(!flag[z%10]) flag[z%10]=1;
		else return false;
		z/=10;
	}
	if(flag[0]) return false;
	return true;
}
inline bool check(int x,int y,int z){
	if(a*y == b*x and a*z == c*x and b*z == c*y and cal(x,y,z)) {
		return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>a>>b>>c;
	bool flag=false;
	for(int i=123;i<=987;i++){
		for(int j=i+1;j<=987;j++){
			for(int k=j+1;k<=987;k++){
				if(check(i,j,k)) cout<<i<<" "<<j<<" "<<k<<endl,flag=1;
			}
		}
	}
	if(!flag) cout<<"No!!!"<<endl; 
	return 0;
}


