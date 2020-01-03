/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/26/2019 1:05:10 AM
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
const double clf = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){return out<<p.first<<" "<<p.second;}
istream& operator >>(istream &in, pii &p){return in>>p.first>>p.second;}
vector<int> a,p1,p2;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int t;while(cin>>t) a.push_back(t);
	p1.push_back(a[0]),p2.push_back(a[0]);
	for(int i=1;i<a.size();i++){
		if(*p1.rbegin()>=a[i]) p1.push_back(a[i]);
		else{
			auto it=upper_bound(p1.begin(),p1.end(),a[i],greater<int>());
			if(it!=p1.end()) *it=a[i];
		}
		if(*p2.rbegin()<a[i]) p2.push_back(a[i]);
		else {
			auto it=lower_bound(p2.begin(),p2.end(),a[i]);
			if(it!=p2.end()) *it=a[i];
		}
	}
	cout<<p1.size()<<endl<<p2.size()<<endl;
	return 0;
}

