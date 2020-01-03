/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/8/2019 12:28:42 AM
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
struct node{
	int x,y;
	bool operator <(const node &a) const {
		return !(y<a.y||(y==a.y&&x<a.x));
	}
};
priority_queue<node> pq;
vector<node> v;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	while(cin>>s){
		if(s=="#") break;
		node t;
		cin>>t.x>>t.y;
		v.push_back(t);
	}
	int k;
	cin>>k;
	for(int i=0;i<v.size();i++){
		int temp=v[i].y;
		for(int j=0;j<k;j++){
			pq.push(v[i]);
			v[i].y+=temp;
		}
	}
	while(!pq.empty()){
		if(k==0) break;
		cout<<pq.top().x<<endl;
		pq.pop();
		k--;
	}
	return 0;
}

