/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/26/2019 11:24:50 PM
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
int p[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		bool flag[n+10]={0};
		unordered_set<int> st;
		vector<int> res,v;
		for(int i=0;i<n;i++){
			cin>>p[i];st.insert(p[i]);
		}
		for(int i=n;i>=1;i--){
			if(!st.count(i)) v.push_back(i);
		}
		bool ok=true;
		for(int i=0;i<n;i++){
			if(!flag[p[i]]&&st.count(p[i])){
				res.push_back(p[i]);
				flag[p[i]]=true;
			}
			else if(flag[p[i]]&&!v.empty()){
				auto pos=lower_bound(v.begin(),v.end(),res.back(),greater<int>());
				if(pos==v.end()){
					ok=false;break;
				}
				res.push_back(*pos);
				v.erase(pos);
			}
			else {
				ok=false;
				break;
			}
		}
		if(!ok) cout<<-1<<endl;
		else {
			for(auto i:res) cout<<i<<" ";cout<<endl;
		}
	}
	return 0;
}

