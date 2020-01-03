/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 11:52:59 PM
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
unordered_set<int> st1,st2;
int a[510][510];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ifstream cin("C:\\Users\\LENOVO\\Desktop\\out.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int r=500,c=500;
	int rgcd[510],cgcd[510];
	fill(rgcd,rgcd+510,1);
	fill(cgcd,cgcd+510,1);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			if(!st1.count(a[i][j]))
				st1.insert(a[i][j]);
			else return 1;
		}
	}
	cout<<1<<endl;
	for(int i=0;i<r;i++){
		rgcd[i]=a[i][0];
		for(int j=1;j<c;j++){
			rgcd[i]=__gcd(rgcd[i],a[j][0]);
			if(st2.count(rgcd[i])) return 1;
			st2.insert(rgcd[i]);
		}
	}
	cout<<2<<endl;
	for(int i=0;i<c;i++){
		cgcd[i]=a[0][i];
		for(int j=1;j<r;j++){
			cgcd[i]=__gcd(cgcd[i],a[0][j]);
			if(st2.count(cgcd[i])) return 1;
			st2.insert(cgcd[i]);
		}
	}
	return 0;
}

