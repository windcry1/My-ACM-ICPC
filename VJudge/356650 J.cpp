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
bool vis[6];
vector<int> v[5];
void dfs(int pos,string s){
	if(pos==5){
		int idx[5];
		for(int i=0;i<pos;i++){
			idx[s[i]-'A']=i;
		}
		bool flag=true;
		for(int i=0;i<5;i++){
			for(auto j:v[i]){
				if(idx[i]>=idx[j])
				flag=false;
			}
		}
		if(flag) cout<<s<<endl,exit(0);
		return ;
	}
	for(char i='A';i<='E';i++){
		if(!vis[i-'A']){
			vis[i-'A']=true;
			dfs(pos+1,s+i);
			vis[i-'A']=false;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=0;i<5;i++){
		string s;cin>>s;
		if(s[1]=='>') swap(s[2],s[0]);
		v[s[0]-'A'].push_back(s[2]-'A');
	}
	for(char i='A';i<='E';i++){
		vis[i-'A']=true;
		string tmp;
		dfs(1,tmp+i);
		vis[i-'A']=false;
	}
	cout<<"impossible"<<endl;
	return 0;
}


