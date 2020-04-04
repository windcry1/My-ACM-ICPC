#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ul dfs(x1+l-1,y1+l-1,x1,y1,l)
#define ur dfs(x1+l-1,y1+l,x1,y1+l,l)
#define dl dfs(x1+l,y1+l-1,x1+l,y1,l)
#define dr dfs(x1+l,y1+l,x1+l,y1+l,l)
using namespace std;
const int INF = 0x3f3f3f3f;
void dfs(int x,int y,int x1,int y1,int l){
	if(l==1) return;
	l>>=1;
	if(x-x1<l&&y-y1<l){
		cout<<x1+l<<" "<<y1+l<<" "<<1<<endl;;
		dfs(x,y,x1,y1,l);
		ur;
		dl;
		dr;
	}
	if(x-x1<l&&y-y1>=l){
		cout<<x1+l<<" "<<y1+l-1<<" "<<2<<endl;
		ul;
		dfs(x,y,x1,y1+l,l);
		dl;
		dr;
	}
	if(x-x1>=l&&y-y1<l){
		cout<<x1+l-1<<" "<<y1+l<<" "<<3<<endl;
		ul;
		ur;
		dfs(x,y,x1+l,y1,l);
		dr;
	}
	if(x-x1>=l&&y-y1>=l){
		cout<<x1+l-1<<" "<<y1+l-1<<" "<<4<<endl;
		ul;
		ur;
		dl;
		dfs(x,y,x1+l,y1+l,l);
	}	
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int k,a,b;
	cin>>k>>a>>b;
	dfs(a,b,1,1,1<<k);
    return 0;
}

