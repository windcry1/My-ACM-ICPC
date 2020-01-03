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
int a[100010],b[100010];
map<int,int> mp;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T;cin>>T;while(T--){
		int flag[2]={0};
		mp.clear();
		a[0]=3;b[0]=3;
		int n;cin>>n;for(int i=n;i>=1;i--) cin>>a[i],flag[a[i]==1]++;
		for(int i=1;i<=n;i++) cin>>b[i],flag[b[i]==1]++;
		int ans=flag[1]-flag[0],cnt=0;//要删去的1的个数 
		for(int i=0;i<=n;i++){
			if(a[i]==1) cnt++;
			if(a[i]==2) cnt--;
			if(mp.find(cnt)==mp.end()) mp[cnt]=i;
		}
		cnt=0;
		int res=MMAX;
		for(int i=0;i<=n;i++){
			if(b[i]==1) cnt++;
			if(b[i]==2) cnt--;
			if(mp.find(ans-cnt)!=mp.end()) res=min(res,mp[ans-cnt]+i);
		}
		cout<<res<<endl;
	}
	return 0;
}

