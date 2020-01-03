/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/29/2019 2:41:00 PM
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
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
vector<pii> ans;
int n,k;
ll dp[110][1<<10][110]; 
inline void init(){
	for(int i=0;i<(1<<n);i++){
		if(i&(i>>1)) continue;
		int cnt=0;
		for(int j=i;j!=0;j>>=1) cnt+=(j&1);
		ans.emplace_back(i,cnt);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>k;
	init();
	dp[0][0][0]=1;
	ll res=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<ans.size();j++){
			for(int l=0;l<=k;l++){
				if(l>=ans[j].second){
					for(int t=0;t<ans.size();t++){
						if(!(ans[t].first&ans[j].first)&&!(ans[t].first&(ans[j].first<<1))&&!(ans[t].first&ans[j].first>>1))
							dp[i][j][l]+=dp[i-1][t][l-ans[j].second];
					}
				}
			}
		}
	}
	for(int i=0;i<ans.size();i++) res+=dp[n][i][k];
	cout<<res<<endl;
	return 0;
}

