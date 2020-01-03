/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/19/2019 10:54:04 PM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
pll a[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		vector<pii> v;
		ll n,m;cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i].first,a[i].second=i;
		if(n>m||n==2) {
			cout<<-1<<endl;
			continue;
		}
		ll res=a[1].first+a[n].first;
		m-=n;
		v.emplace_back(1,n);
		for(int i=1;i<n;i++){
			res+=a[i].first+a[i+1].first;
			v.emplace_back(i,i+1);
		}
		sort(a+1,a+1+n);
		for(int i=0;i<m;i++){
			res+=a[1].first+a[2].first;
			v.emplace_back(a[1].second,a[2].second);
		}
		cout<<res<<endl;
		for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

