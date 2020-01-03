/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/20/2019 2:11:28 AM
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
int a[20];
int x[20][20],y[20][20];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=1;j<=a[i];j++) cin>>x[i][j]>>y[i][j];
	}
	int res=0;
	for(int state=0;state<(1<<n);state++){
		bool flag=true;
		for(int i=0;i<n;i++){
			if(state&(1<<i)){
				for(int j=1;j<=a[i];j++){
					if(y[i][j]&&!(1<<(x[i][j]-1)&state)){
						flag=false;
						break;
					}
					if(!y[i][j]&&(1<<(x[i][j]-1)&state)){
						flag=false;
						break;
					}
				}
				if(!flag) break;
			}
		}
		if(flag) res=max(res,__builtin_popcount(state));
	}
	cout<<res<<endl;
	return 0;
}

