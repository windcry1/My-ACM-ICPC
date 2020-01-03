/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/19/2019 11:31:35 PM
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
pii a[100010];
ll prime(ll n){
	for(ll i=2;i<=sqrt(n)+1;i++)
		if(n%i==0) return i;
	return n;
}
vector<vector<ll> > ans;
vector<ll> temp;
vector<ll> ave;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	ll res=0,sum=0;
	for(int i=0;i<n;i++) cin>>a[i].first,a[i].second=i,res+=a[i].first;
	if(res<=1LL) {
		cout<<-1<<endl;
		return 0;
	}
	ll m=prime(res),now=0;
	
	for(int i=0;i<n;i++){
		if(a[i].first&&now<m) temp.push_back(a[i].second),now++,sum+=a[i].second;
		else if(a[i].first) {
			ans.push_back(temp);
			ave.push_back(sum/m);
			temp.clear();
			sum=a[i].second;
			temp.push_back(a[i].second);
			now=1LL;
		}
	}
	ans.push_back(temp);
	ave.push_back(sum/m);
	res=0;
	for(unsigned i=0;i<ans.size();i++){
		for(unsigned j=0;j<ans[i].size();j++){
			res+=abs(ans[i][j]-ave[i]);
		}
	}
	cout<<res<<endl;
	return 0;
}

