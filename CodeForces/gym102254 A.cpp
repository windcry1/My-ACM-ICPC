/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/13/2019 8:27:31 PM
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
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
vector<int> fa[2010];
int res=0;
bool flag[2010];
void bfs(int x){
	queue<pii> q;
	q.emplace(x,0);
	flag[x]=1;
	while(!q.empty()) {
		pii t=q.front();q.pop();
		res=max(res,t.second); 
		for(auto i:fa[t.first])
			if(!flag[i]) flag[i]=true,q.emplace(i,t.second+1);
	} 
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		fa[a].push_back(b);
		fa[b].push_back(a); 
	}
	for(int i=1;i<=n;i++){
		memset(flag,0x00,sizeof flag);
		bfs(i);
		for(int j=1;j<=n;j++){
			if(!flag[j])
			{
				cout<<"=["<<endl;
				return 0;
			}
		}
	}
	cout<<"=] "<<res<<endl;
	return 0;
}

