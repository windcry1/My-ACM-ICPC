/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/6/2019 12:26:57 AM
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
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;cin>>s;
	if(s.size()==1){
		for(int i=1;i<=s[0]-'0';i++)
			cout<<i;
	}
	else if(s.size()==2){
		for(int i=1;i<=s[0]-'0';i++)
			cout<<'S';
		for(int i=1;i<=s[1]-'0';i++)
			cout<<i;
	}
	else {
		for(int i=1;i<=s[0]-'0';i++)
			cout<<'B';
		for(int i=1;i<=s[1]-'0';i++)
			cout<<'S';
		for(int i=1;i<=s[2]-'0';i++)
			cout<<i;
	}
	return 0;
}

