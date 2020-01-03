/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/7/2019 11:41:07 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;while(cin>>n&&n){
		map<set<int>,int> mp;
		int m=-1;
		for(int i=0;i<n;i++){
			set<int> st;
			for(int i=0;i<5;i++){
				int t;cin>>t;
				st.insert(t);
			}
			mp[st]++;
			m=max(m,mp[st]);
		}
		int res=0;
		for(auto i:mp)
			if(i.second==m) res+=m;
		cout<<res<<endl;
	}
	return 0;
}

