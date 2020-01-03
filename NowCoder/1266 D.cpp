/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/18/2019 12:05:20 AM
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
int n,m;
map<int,int> a[100010];
void bellman_ford(int x){
	int _=a[x].size();
	for(int i=1;i<=_;i++){
		vector<int> v;
		for(auto j:a[x]){
			for(auto k:a[j.first]){
				int t=min(j.second,k.second);
				a[x][j.first]-=t;a[j.first][k.first]-=t;
				a[x][k.first]+=t;
				if(a[x][j.first]==0) v.push_back(j.first);
			}
		}
		for(auto j:v) a[x].erase(j);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v,w;cin>>u>>v>>w;
		a[u][v]+=w;
	}
	for(int i=1;i<=n;i++) bellman_ford(i);
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(auto j:a[i]){
			if(j.second&&j.first!=i) ++cnt;
		}
	}
	cout<<cnt<<endl;
	for(int i=1;i<=n;i++){
		for(auto j:a[i]){
			if(j.second&&j.first!=i)
			cout<<i<<" "<<j.first<<" "<<j.second<<endl;
		}
	}
	return 0;
}
