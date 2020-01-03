/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 7:08:11 PM
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
vector<int> a,b;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m,t;cin>>n>>m;
	for(int i=0;i<n;i++) cin>>t,a.push_back(t);
	for(int i=0;i<n;i++) cin>>t,b.push_back(t);
	map<int,int> mpa,mpb;
	for(int i=0;i<n;i++){
		mpb[b[i]]++;
		mpb[b[i]+m]++;
		mpa[a[i]]++;
	}
	vector<pii> p1,p2;
	for(auto i:mpa) p1.push_back(i);
	for(auto i:mpb) p2.push_back(i);
	for(int i=0;i<=p2.size()-p1.size();i++){
		bool flag=true;
		if(p2[i].second!=p1[0].second) continue;
		int t=(p2[i].first-p1[0].first+m)%m;
		for(int j=1;j<p1.size();j++){
			if((p2[i+j].first-p1[j].first+m)%m!=t){
				flag=false;
				break;
			}
			if(p2[i+j].second!=p1[j].second){
				flag=false;
				break;
			}
		}
		if(flag) {
			cout<<t<<endl;
			return 0;
		}
	}
	return 0;
}

