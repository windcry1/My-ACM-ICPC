/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/27/2019 11:30:08 PM
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
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const ll mod = 998244353;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
vector<int> v[1000010];
int k[1000010],pos[1000010];
ll qmi(ll a,ll b){
	ll res=1;
	while(b){
		if(b&1) res=res*a%mod;
		b>>=1;
		a=a*a%mod;
	}
	return res;
}
ll inv(ll p){
	return qmi(p,mod-2);
}
ll cal(ll a,ll b){
	return (a%mod)*(inv(b)%mod)%mod;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	int res=0;
	for(int i=1;i<=n;i++){
		cin>>k[i];
		for(int j=0;j<k[i];j++){
			int t;cin>>t;
			v[i].push_back(t);
			pos[t]++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<v[i].size();j++)
			res=(res+cal(1,n)*cal(1,k[i])%mod*cal(pos[v[i][j]],n)%mod)%mod;
	}
	cout<<res<<endl;
	return 0;
}

