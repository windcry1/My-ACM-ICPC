/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/1/2019 12:04:09 PM
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
const int MAXN = 1e5+10; 
vector<int> a[MAXN];
vector<double> v;
int n,m;
double res=0;
struct node{
	int now;
	//double p;
	double step;
};
void bfs(){
	queue<node> q;
	node t;
	t.now = 1;
	//t.p = 1;
	t.step = 0;
	q.push(t);
	while(!q.empty()){
		t=q.front();q.pop();
		if(t.now==n){
			res += t.step;
			v.push_back(t.step);
			continue;
		}
		double temp = 1/(double)(a[t.now].size()+1);
		for(auto i:a[t.now]){
			node p;
			p.now = i;
			p.step = t.step+temp/((1-temp)*(1-temp));
			cout<<p.step<<endl;
			q.push(p);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		for(int i=0;i<MAXN;i++) a[i].clear();
		cin>>n>>m;
		for(int i=0;i<m;i++){
			int t1,t2;cin>>t1>>t2;
			a[t1].push_back(t2);
		}
		bfs();
		for(auto i:v)
			cout<<i<<endl;
		cout<<res<<endl;
	}
	return 0;
}

