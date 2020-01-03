/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 8:52:23 PM
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
struct node{
	ll a,b,cha;
	bool operator <(const node &a)const{
		return cha>a.cha;
	}
}x[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i].a>>x[i].b,x[i].cha=x[i].a-x[i].b;
	sort(x+1,x+n+1);
	ull res=0;
	for(int i=1;i<=n;i++)
		res+=x[i].a*(i-1)+x[i].b*(n-i);
	cout<<res<<endl;
	return 0;
}

