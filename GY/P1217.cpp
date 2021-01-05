#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
int n,m;
string s;
vector<int> res;
bool check(string s){
	bool flag=1;
	if(s=="") flag=0;
	if(s[0]==0) flag=0;
	int n=stoll(s);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
void dfs(int l){
	if(l==9) return;
	if(check(s)) res.push_back(stoll(s));
	for(int i=0;i<=9;i++){
		string s2=s;
		s=to_string(i)+s+to_string(i);
		dfs(l+2);
		s=s2;
	}
}
void dfs2(int l){
	if(l==8) return;
	if(check(s)) res.push_back(stoll(s));
	for(int i=0;i<=9;i++){
		string s2=s;
		s=to_string(i)+s+to_string(i);
		dfs(l+2);
		s=s2;
	}
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<=9;i++){
		s=to_string(i);
		dfs(1);
	}
	s="";
	dfs2(1);
	for(auto i:res) cout<<i<<" ";
    return 0;
}

