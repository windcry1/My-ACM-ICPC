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
int fa[100010];
bool vis[100010];
int recursive_find(int x){
	return fa[x]==x?x:recursive_find(fa[x]);
}//递归查找root 
int recursive_find_with_path_compression(int x){
	return fa[x]==x?x:fa[x]=recursive_find_with_path_compression(fa[x]);
}//递归过程中压缩路径 
int find(int x){
	while(x!=fa[x]) x=fa[x];
	return x;
}//不递归查找root 
int find_with_path_compression(int x){
	int tmp=x;
	while(x!=fa[x]) x=fa[x];
	while(fa[tmp]!=x){
		int t=fa[tmp];
		fa[tmp]=x;
		tmp=t;
	}
	return x;
}//不递归查找root并且压缩路径 
int mian(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int a,b;
	bool flag=false;
	for(int i=0;i<100010;i++) fa[i]=i,vis[i]=false;
	while(cin>>a>>b){
		if(a==0&&b==0){
			int cnt=0;
			for(int i=0;i<100010;i++)
				if(vis[i]&&fa[i]==i) ++cnt;
			if(cnt>1) flag=true;
			cout<<(flag?"No":"Yes")<<endl;
			flag=false;
			for(int i=0;i<100010;i++) fa[i]=i,vis[i]=false;
			continue;
		}
		if(a==-1&&b==-1) return 0;
		vis[a]=1;
		vis[b]=1;
		if(find(a)!=find(b)){
			fa[find(a)]=find(b);
			vis[a]=1;
			vis[b]=1;
		}
		else flag=true;
	}
	return 0;
}


