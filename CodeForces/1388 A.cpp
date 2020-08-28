/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
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
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
vector<int> prime;
bool isprime(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return false;
	return true;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=4;i<=2e5;i++)
		if(isprime(i)) prime.push_back(i);
	int T;for(cin>>T;T--;){
		int n;cin>>n;
		if(n<=30){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		if((n-7)%4==0) cout<<"1 6 ",n-=7;
		else if((n-8)%4==0) cout<<"2 6 ",n-=8;
		else if((n-9)%4==0) cout<<"3 6 ",n-=9;
		else if((n-10)%4==0) cout<<"4 6 ",n-=10;
		vector<int> res;
		n/=2;
		for(auto i:prime){
			if(isprime(n-i)){
				res.push_back(2*i);
				res.push_back(2*(n-i));
				break;
			}
		}
		for(auto i:res)
			cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}


