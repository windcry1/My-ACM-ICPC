/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/21/2019 4:13:32 PM
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
bool judge(pii a,pii b,pii c,pii d){
	int h = (b.first - a.first) * (c.second - a.second) - (b.second - a.second) * (c.first - a.first);
	int i = (b.first - a.first) * (d.second - a.second) - (b.second - a.second) * (d.first - a.first);
	int j = (d.first - c.first) * (a.second - c.second) - (d.second - c.second) * (a.first - c.first);
	int k = (d.first - c.first) * (b.second - c.second) - (d.second - c.second) * (b.first - c.first);
	return h*i<=0&&j*k<=0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	pii d1,d2,p1,p2;
	while(cin>>d1>>d2>>p1>>p2){
		if(min(d1.first,d2.first)<=max(p1.first,p2.first)&&min(p1.second,p2.second)<=max(d1.second,d2.second)&&min(p1.first,p2.first)<=max(d1.first,d2.first)&&min(d1.second,p2.second)<=max(d1.second,d2.second))
			cout<<"YES\r\n";
		else cout<<"NO\r\n";
	} 
	return 0;
}

