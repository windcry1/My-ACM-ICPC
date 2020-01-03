/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/18/2019 12:25:34 AM
*************************************************************************/
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
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
map<int,int> res[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v,d;cin>>u>>v>>d;
		while(!res[u].empty()){
			pii temp=*res[u].begin();
			res[u].erase(res[u].begin());
			int t=min(temp.second,d);
			temp.second-=t;
			d-=t;
			if(temp.second) {
				res[u].insert(temp);
				res[v].emplace(temp.first,t);
				break;
			}
			res[v].emplace(temp.first,t);
		}
		if(d) res[v][u]+=d;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!res[i].empty()){
			bool flag=false;
			for(auto j=res[i].begin();j!=res[i].end();j++){
				if(!j->second) flag=false;
				else if(j->first==i) flag=false;
				else flag=true;
			}
			cnt+=flag;
		}
	}
	cout<<cnt<<endl;
	for(int i=1;i<=n;i++){
		if(res[i].size()){
			for(auto j:res[i]){
				if(j.first==i) continue;
				if(!j.second) continue;
				cout<<j.first<<" "<<i<<" "<<j.second<<endl;
			}
		}
	}
	return 0;
}

