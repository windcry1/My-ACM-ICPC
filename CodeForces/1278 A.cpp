/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/19/2019 10:34:06 PM
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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		string s1,s2;cin>>s1>>s2;
		sort(s1.begin(),s1.end());
		bool flag=false;
		for(int i=0;i<=(int)s2.size()-(int)s1.size();i++){
			for(int j=0;j<(int)s1.size();j++){
				string t=s2.substr(i,s1.size());
				sort(t.begin(),t.end());
				if(t==s1) flag=true;
			}
		}
		cout<<(flag?"YES":"NO")<<endl;
	}
	return 0;
}

