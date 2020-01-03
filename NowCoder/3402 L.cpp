/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/29/2019 4:57:18 PM
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
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int x,y,cha;
	bool operator <(const node &a) const{
		return cha>a.cha;
	}
}a[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	ll n,m;
	while(cin>>n>>m){
		ll now=0;
		for(int i=1;i<=n;i++){
			cin>>a[i].x>>a[i].y,a[i].cha=a[i].x-a[i].y;
			now+=a[i].x;
		}
		sort(a+1,a+1+n);
		int res=0;
		for(int i=1;i<=n;i++){
			if(now<=m) break;
			now-=a[i].cha;
			++res;
		}
		if(now>m) cout<<-1<<endl;
		else cout<<res<<endl;
	}
	return 0;
}

