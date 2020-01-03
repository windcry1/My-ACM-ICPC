/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/8/2019 12:10:49 PM
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
const ll mod = 100003;
ll f[100010];
bool choice[100010];
inline int change(int n,int leap){
	if(n%leap==0) return leap;
	else return n%leap;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,Q,a;cin>>n>>Q>>a;
	ll leap=0;
	f[1]=1;
	choice[1]=true;
	for(int i=2;i<=100005;i++){
		ll t = (a*f[i-1]+1)%mod; 
		if(!choice[t])
			f[i] = t,choice[t] = true;
		else {
			leap = i-1;
			break;
		}
	}
	cout<<leap<<endl;
	cout<<f[leap]<<endl;
	return 0;
}

