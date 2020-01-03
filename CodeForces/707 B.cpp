/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/25/2019 10:39:24 PM
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
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){return out<<p.first<<" "<<p.second;}
istream& operator >>(istream &in, pii &p){return in>>p.first>>p.second;}
int a[100010];
int u[100010],v[100010],w[100010],p[100010];
set<int> st;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m,k;cin>>n>>m>>k;
	memset(a,INF,sizeof a);
	for(int i=0;i<m;i++) cin>>u[i]>>v[i]>>w[i];
	int res=INF,t;
	for(int i=0;i<k;i++) cin>>p[i],st.insert(p[i]);
	for(int i=0;i<m;i++){
		if(st.count(u[i])&&!st.count(v[i])) a[u[i]]=min(a[u[i]],w[i]);
		if(!st.count(u[i])&&st.count(v[i])) a[v[i]]=min(a[v[i]],w[i]);
	}
	for(int i=0;i<k;i++)
		res=min(res,a[p[i]]);
	cout<<(res==INF?-1:res)<<endl;
	return 0;
}

