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
vector<pair<string,string> > v;
set<string> vis; 
string a,b;
int bfs(string x){
	queue<pair<string,int> >q;
	q.push(make_pair(x,0));
	while(!q.empty()){
		pair<string,int> t=q.front();q.pop();
		if(t.first==b) return t.second;
		if(t.second>10) return -1;
		if(vis.count(t.first)) continue;
		else vis.insert(t.first);
		for(auto i:v){
			for(int j=0;j<=(int)t.first.size()-(int)i.first.size();j++){
				if(t.first.substr(j,i.first.size())==i.first){
					string temp;
					for(int k=0;k<j;k++){
						temp+=t.first[k];
					}
					temp+=i.second;
					for(int k=(int)i.first.size()+j;k<(int)t.first.size();k++)
						temp+=t.first[k];
					if(!vis.count(temp)) 
					q.push(make_pair(temp,t.second+1));
				}
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>a>>b;
	string x,y;while(cin>>x>>y) v.emplace_back(x,y);
	int res=bfs(a);
	if(res!=-1) cout<<res<<endl;
	else cout<<"NO ANSWER!"<<endl;
	return 0;
}


