/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/14/2019 7:31:24 PM
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
string s;
vector<int> res;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		res.clear();
		cin>>s;
		if(s.size()<=2) { cout<<0<<endl<<endl;continue;}
		for(int i=0;i<s.size()-2;i++){
			string t=s.substr(i,3);
			if(t=="one"||t=="two"){
				if(t=="one"){
					if(!res.empty()&&*res.rbegin()==i)
						continue;
					res.push_back(i+1);
				}
				else {
					if(i<s.size()-3&&s[i+3]=='o') res.push_back(i+1);
					else res.push_back(i+2);
				}
			}
		}
		cout<<res.size()<<endl;
		for(auto i:res) cout<<i+1<<" ";cout<<endl;
	}
	return 0;
}

