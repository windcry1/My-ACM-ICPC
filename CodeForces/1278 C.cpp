/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/19/2019 11:04:49 PM
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
#define ls(u) u<<1
#define rs(u) u<<1|1
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
map<int,int> mp;
int a[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T;cin>>T;while(T--){
		int n,m,res,cnt[4]={0},s[4]={0};cin>>n;m=n<<1;res=m;mp.clear();
		for(int i=1;i<=m;i++)	cin>>a[i],cnt[a[i]]++;
		if(cnt[1]==cnt[2]){cout<<0<<endl; continue;}
		for(int i=n;i>=1;i--){
			s[a[i]]++;	if(!mp.count(s[2]-s[1]))	mp[s[2]-s[1]]=i;
			if(cnt[2]-s[2]==cnt[1]-s[1])	res=min(res,n-i+1);
		}
		memset(s,0,sizeof s);
		for(int i=n+1;i<=m;i++){
			s[a[i]]++;  int c1=cnt[1]-s[1],c2=cnt[2]-s[2];
			if(mp.count(c2-c1))	res=min(res,i-mp[c2-c1]+1);
			if(c1==c2)	res=min(res,i-n);
		}
		cout<<res<<endl;
	}
	return 0;
}

