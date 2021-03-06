/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/26/2019 6:34:49 PM
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
	int l,r;
	inline bool operator <(const node &a) const{
		return r>a.r||(r==a.r&&l>a.l);
	}
}a[200010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>a[i].l>>a[i].r;
	sort(a,a+n);
	int min=a[0].l,m=a[0].l;
	int res=0;
	for(int i=0;i<n;i++){
		if(a[i].r<min||a[i].r<m) break;
		m=max(m,a[i].l);
		res++;
	}
	cout<<res<<endl;
	return 0;
}

