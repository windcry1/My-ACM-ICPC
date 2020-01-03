/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/26/2019 10:13:05 PM
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
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
vector<ll> v;
ll g(ll a,ll b){
	ll res=1;
	while(a%b==0){
		res=res*b%mod;
		a/=b;
	}
	return res;
}
void change(ll x){
	int temp=sqrt(x);
	for(int i=2;i<=temp;i++){
		if(x%i==0){
			while(x%i==0) x/=i;
			v.push_back(i);
		}
	}
	if(x!=1) v.push_back(x);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll x,n;cin>>x>>n;
	change(x);
	//for(auto i:v) cout<<i<<endl;
	ll res=1;
	for(int i=1;i<=min(x,n);i++){
		for(auto j:v){
			res=res*g(i,j)%mod;
		}
	}
	cout<<res<<endl;
	return 0;
}

