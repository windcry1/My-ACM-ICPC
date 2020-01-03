/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/29/2019 1:56:04 AM
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
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll a[200010];
ll n,m;
vector<int> v;
bool check(int x){
	ll res=2LL*x;
	for(int i=1;i<n;i++) res+=min(a[i+1]-a[i]-1,2LL*x);
	return res>=m;
}
int search(){
	int l=1,r=m>>1,ans=1,mid;
	while(l<=r){
		mid=(l+r)>>1;
		if(check(mid)) ans=mid,r=mid-1;
		else l=mid+1;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int s=search();
	ll res=0;
	for(int i=1;i<n;i++){
		if(a[i+1]-a[i]-1>=2*(s-1)){
			for(int j=a[i]+1;j<=a[i]+(s-1);j++)
				v.push_back(j),res+=j-a[i];
			for(int j=a[i+1]-1;j>=a[i+1]-(s-1);j--)
				v.push_back(j),res+=a[i+1]-j;
		}
		else
			for(int j=a[i]+1;j<=a[i+1]-1;j++)
				v.push_back(j),res+=min(j-a[i],a[i+1]-j);
	}
	for(int i=a[1]-1;i>=a[1]-(s-1);i--) v.push_back(i),res+=a[1]-i;
	for(int i=a[n]+1;i<=a[n]+(s-1);i++) v.push_back(i),res+=i-a[n];
	if(v.size()<m) v.push_back(a[1]-s),res+=s;
	if(v.size()<m) v.push_back(a[n]+s),res+=s;
	if(v.size()<m){
		for(int i=1;i<n;i++){
			if(a[i+1]-a[i]-1>=2*s){
				if(v.size()<m) v.push_back(a[i]+s),res+=s;
				if(v.size()<m) v.push_back(a[i+1]-s),res+=s;
				if(v.size()==m) break;
			}
			if(a[i+1]-a[i]-1==2*s-1){
				if(v.size()<m) v.push_back(a[i+1]-s),res+=s;
				if(v.size()==m) break;
			}
		}
	}
	cout<<res<<endl;
	for(auto i:v) cout<<i<<" ";
	return 0;
}

