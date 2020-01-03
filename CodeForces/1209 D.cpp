/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/14/2019 10:14:46 PM
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
const int INF = 0xfffffff;
const int mod = 1e9+7;
struct node{
	int a[2];
	inline bool operator ==(const node &x) const {
		return a[0]==x.a[0]&&a[1]==x.a[1];
	}
	inline bool operator <(const node &x)const{
		return a[0]<x.a[0]||a[0]==x.a[0]&&a[1]<x.a[1];
	}
}a[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;cin>>n>>k;
	for(int i=0;i<k;i++){
		int t1,t2;cin>>t1>>t2;
		if(t1>t2) swap(t1,t2);
		a[i].a[0]=t1,a[i].a[1]=t2;
	}
	sort(a,a+k); 
	int cnt=0;
	for(int i=1;i<k;i++) {
		if(a[i]==a[i-1]) ++cnt;
	}
	cout<<cnt<<endl;
	return 0;
}

