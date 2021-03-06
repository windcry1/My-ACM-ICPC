/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/24/2019 10:58:57 PM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
int a[200010],suf[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		int n,p,k;cin>>n>>p>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int res1=0,res=0,t=p;
		for(int i=1;i<=n;i++) suf[i]=suf[i-1]+a[i];
		for(int j=1;j<=k;j++){
			p=t-suf[j-1];
			if(p<0) break;
			res1=j-1;
			for(int i=j;i+k-1<=n;i+=k){
				if(p-a[i+k-1]<0) break;
				res1+=k;
				p-=a[i+k-1];
			}
			res=max(res,res1);
		}
		cout<<res<<endl;
	}
	return 0;
}

