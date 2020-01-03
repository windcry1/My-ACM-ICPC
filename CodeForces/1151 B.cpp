/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 8:41:04 PM
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
int a[510][510],res[510][510];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m,ans=0;cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(j==1) ans^=a[i][j];
		}
	bool flag=false;
	vector<int> res;
	for(int i=1;i<=n;i++) res.push_back(1);
	if(ans==0){
		bool f=false;
		for(int i=1;i<=n;i++){
			for(int j=2;j<=m;j++){
				if(a[i][j]!=a[i][1]){
					ans^=a[i][1];
					ans^=a[i][j];
					res[i-1]=j;
					f=1;
					break;
				}
			}
			if(f) break;
		}
		if(ans){
			cout<<"TAK"<<endl;
			for(auto i:res) cout<<i<<" ";cout<<endl;
			return 0;
		}
	}
	else{
		cout<<"TAK"<<endl;
		for(auto i:res) cout<<i<<" ";cout<<endl;
		return 0;
	}
	cout<<"NIE"<<endl;
	return 0;
}
