/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/17/2019 12:10:25 PM
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
int n;
vector<int> v;
bool ok(){
	unordered_set<int> in,out;
	int temp=0;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		//cout<<t<<endl;
		if(t==0) return 0;
		else if(t>0){
			if(!in.count(t)){
				in.insert(t);
				if(!out.count(t)){
					out.insert(t);
				}
				else return 0;
			}
			else return 0;
		}
		else{
			if(in.count(-t)){
				in.erase(-t);
			}
			else return 0;
		}
		if(in.empty()) v.push_back(i+1-temp),out.clear(),temp=i+1;
	}
	if(!in.empty()) return 0;
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	//cout<<n<<endl;
	bool o=ok();
	cout<<(o?(int)v.size():-1)<<endl;
	if(o) for(auto i:v) cout<<i<<" ";
	return 0;
}

