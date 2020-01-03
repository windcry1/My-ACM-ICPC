/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/28/2019 12:50:21 PM
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
int n;string s;
int cnt[60];
unordered_set<int> st;
inline int get_idx(char c){
	if(islower(c)) return c-'a';
	return c-'A'+26;
}
inline bool judge(){
	for(int i=0;i<60;i++)
		if(st.count(i)&&!cnt[i]) return false;
	return true;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>s;
	for(int i=0;i<n;i++) st.insert(get_idx(s[i]));
	int res=0x7fffffff;
	for(int i=0,j=0;i<n&&j<n;){
		while(!judge()&&j<n) ++cnt[get_idx(s[j])],j++;
		while(judge()&&i<n) --cnt[get_idx(s[i])],i++;
		res=min(res,j-i+1);
	}
	cout<<res<<endl;
	return 0;
}

