/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
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
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
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
ll qmi(ll a,ll b,ll p){
	ll res=1;
	while(b){
		if(b&1LL) res=res*a%p;
		b>>=1;
		a=a*a%p;
	}
	return res;
}
bool judge(int i,int j,ll m,ll ans,string s){
	ans=(ans-(s[j]-'A')*qmi(26,(int)s.size()-i-1,m)-(s[i]-'A')*qmi(26,(int)s.size()-j-1,m)+2*m)%m;
	ans=(ans+(s[i]-'A')*qmi(26,(int)s.size()-i-1,m)+(s[j]-'A')*qmi(26,(int)s.size()-j-1,m))%m;
	return (ans==0LL?true:false);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	string s;ll m;cin>>s>>m;
	ll ans=0;
	for(auto c:s) ans=(ans*26+c-'A')%m;
	if(ans==0LL){
		cout<<"0 0"<<endl;
		return 0;
	}
	string res;
	int posl,posr;
	for(int i=0;i<(int)s.size();i++){
		for(int j=i+1;j<(int)s.size();j++){
			swap(s[i],s[j]);
			if(judge(i,j,m,ans,s)){
				if(res=="") {
					res=s;
					posl=i;
					posr=j;
				}
				else if(res>s){
					res=s;
					posl=i;
					posr=j;
				}
			}
			swap(s[i],s[j]);
		}
	}
	if(res=="") cout<<"-1 -1"<<endl;
	else cout<<posl+1<<" "<<posr+1<<endl;
	return 0;
}


