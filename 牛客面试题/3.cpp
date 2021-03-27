/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 2021/1/6 15:44:52
*************************************************************************/
//#pragma GCC optimize(2)
//#pragma GCC diagnostic error "-std=c++11"
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
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int a[110];
bool judge(int first=0){
	bool ok=false;
	if(!first){
		for(int i=1;i<=9;i++){
			if(a[i]>=2){
				a[i]-=2;
				if(judge(1)) ok=1;
				a[i]+=2;
			}
		}
	}else{
		for(int i=1;i<=9;i++){
			if(a[i]>=3){
				a[i]-=3;
				if(judge(1)) ok=1;
				a[i]+=3;
			}
		}
		for(int i=1;i<=9-2;i++){
			if(a[i] and a[i+1] and a[i+2]){
				a[i]--,a[i+1]--,a[i+2]--;
				if(judge(1)) ok=1;
				a[i]++,a[i+1]++,a[i+2]++;
			}
		}
	}
	bool t=false;
	for(int i=1;i<=9;i++){
		if(a[i]) t=true;
	}
	if(!t) ok=1;
	return ok;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=0,t;i<13;i++) cin>>t,a[t]++; 
	int cnt=0;
	for(int i=1;i<=9;i++){
		if(a[i]>=4) continue;
		a[i]++;
		if(judge()){
			cnt++;
			cout<<i<<" ";
		}
		a[i]--;
	}
	if(!cnt) cout<<0<<endl;
	return 0;
}


