/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/5/2019 10:39:56 PM
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

int main() {
	ios::sync_with_stdio(false);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	map<string,int> mp;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		string s;
		int t;
		cin>>s>>t;
		mp[s]=t;
	}
	//key == first
	//key->value == first -> second
	//value == second
	for(int i=0;i<m;i++){
		ll res=0;string s;
		while(cin>>s){
			if(s==".") break;
			if(mp.find(s)!=mp.end()){
				res+=mp[s];
			}
		}
		cout<<res<<endl;
	}
	for(auto i:mp) {
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

