/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/8/2019 8:47:20 AM
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
int dp[36][65536];
vector<pair<int,int> > v[36][65536];
struct node{
	int val[16];
	int id;
	bool choice;
	inline void operator =(node a){
		for(int i=0;i<16;i++)
			val[i] = a.val[i];
		id = a.id;
		choice = a.choice;
	}
}a[210],res[33],b[210];

inline bool cmp1(const node &a,const node &b){
	return a.val[0]>b.val[0];
}
inline bool cmp2(const node a,const node b){
	return a.val[9]>b.val[9];
}
inline bool cmp3(const pair<int,int> a,const pair<int,int> b){
	return a.first<b.first;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n){
		
		memset(dp,0,sizeof dp);
		for(int i=0;i<36;i++) for(int j=0;j<65536;j++) v[i][j].clear();
		int t;
		for(int i=1;i<=n;i++)
			for(int j=0;j<2;j++){
				cin>>t;
				for(int k=8*j;k<8*j+8;k++)
					a[i].val[k]=t;
				a[i].id=i;
				a[i].choice = false;
			}
		for(int i=0;i<210;i++)
			b[i] = a[i];
		sort(a+1,a+n+1,cmp1);
		for(int i=1;i<=16;i++) res[i] = a[i],a[i].choice = true;
		sort(a+1,a+n+1,cmp2);
		
		int cnt=17;
		int i=1;
		while(cnt<=32){
			if(a[i].choice) {
				++i;continue;
			}
			res[cnt++] = a[i];
			++i;
		}
		int ans = 1<<16;
		for(int i=1;i<=32;i++){
			for(int s=0;s<ans;s++){
				dp[i][s] = dp[i-1][s];
				v[i][s] = v[i-1][s];
				for(int k=0;k<16;k++){
					int ns=1<<k;
					if(!(s&ns)) continue;
					if(dp[i-1][s^ns]+res[i].val[k]>dp[i][s]){
						dp[i][s] = dp[i-1][s^ns]+res[i].val[k];
						v[i][s] = v[i-1][s^ns];
						v[i][s].emplace_back(res[i].id,k);
					}
				}
			}
		}
		cout<<dp[32][65535]<<endl;
		sort(v[32][65535].begin(),v[32][65535].end(),cmp3);
		for(auto i:v[32][65535])
			cout<<i.first<<" "<<b[i.first].val[0]<<" "<<b[i.first].val[8]<<" "<<i.second/8+1<<endl;
	}
	return 0;
}

