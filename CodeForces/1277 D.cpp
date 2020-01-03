/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 11:00:59 AM
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
string s[200010];
unordered_set<string> st;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		st.clear();
		int res[4]={0};
		int n;cin>>n;
		vector<int> pos[4];
		for(int i=1;i<=n;i++){
			cin>>s[i];
			st.insert(s[i]);
			if(s[i][0]=='0'&&s[i][s[i].size()-1]=='0') res[0]++,pos[0].push_back(i);
			if(s[i][0]=='0'&&s[i][s[i].size()-1]=='1') res[1]++,pos[1].push_back(i);
			if(s[i][0]=='1'&&s[i][s[i].size()-1]=='0') res[2]++,pos[2].push_back(i);
			if(s[i][0]=='1'&&s[i][s[i].size()-1]=='1') res[3]++,pos[3].push_back(i);
		}
		if(!res[1]&&!res[2]&&res[0]&&res[3]){
			cout<<-1<<endl;
			continue;
		}
		vector<int> ans;
		if(res[1]>res[2]){
			int temp=res[1]-res[2];
			for(int i=0;i<pos[1].size();i++){
			for(int i=0;i<pos[1].size();i++){
				if(abs(res[1]-res[2])<=1) break;
				string t=s[pos[1][i]];
				reverse(t.begin(),t.end());
				if(st.count(t))
					continue;
				res[1]--;res[2]++;
				st.erase(s[pos[1][i]]);
				ans.push_back(pos[1][i]);
			}
		}
		else if(res[2]>res[1]){
			int temp=res[2]-res[1];
			for(int i=0;i<pos[2].size();i++){
				if(abs(res[2]-res[1])<=1) break;
				string t=s[pos[2][i]];
				reverse(t.begin(),t.end());
				if(st.count(t))
					continue;
				res[2]--;res[1]++; 
				st.erase(s[pos[2][i]]);
				ans.push_back(pos[2][i]);
				
			}
		}
		if(abs(res[1]-res[2])>1) cout<<-1<<endl;
		cout<<ans.size()<<endl;
		for(auto i:ans) cout<<i<<" ";cout<<endl;
	}
	return 0;
}

