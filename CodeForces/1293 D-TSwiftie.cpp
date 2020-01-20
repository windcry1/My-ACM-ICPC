/************************************************************
	> File Name: d1.cpp
	> Author: TSwiftie
	> Mail: 2224273204@qq.com 
	> Created Time: Sun 19 Jan 2020 10:58:53 PM CST
************************************************************/

#pragma GCC optimize(2)
#include <bits/stdc++.h>
#include <ext/rope>
#define lowbit(x) (x&-x)
#define lc (o<<1)
#define rc (o<<1|1)
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5+5;
const int MAXM = 2e5+5;
const int MOD = 1e9+7;
const int dir[4][2] = {1,0,-1,0,0,1,0,-1};
const double PI = acos(-1.0);
const double EXP = 1e-8;
vector<ll>X,Y;
ll sx,sy,ax,ay,bx,by;
ll xs,ys,t;
ll Dis(ll x1,ll y1,ll x2,ll y2){
	return abs(x1-x2)+abs(y1-y2);
}
ll solve(ll n){
	ll xx = xs,yy = ys;
	ll ans = 0;
	ll tt = t;
	for(int i = n;i >= 0;i--){
		ll dis = Dis(xx,yy,X[i],Y[i]);
		if(dis <= tt){
			tt -= dis;
			xx = X[i];
			yy = Y[i];
			ans++;
		}else
			return ans;
	}
	return ans;
}
ll solve2(ll n){
	ll xx = xs,yy = ys;
	ll ans = 0;
	ll tt = t;
	for(int i = n;i < X.size();i++){
		ll dis = Dis(xx,yy,X[i],Y[i]);
		if(dis <= tt){
			tt -= dis;
			xx = X[i];
			yy = Y[i];
			ans++;
		}else
			return ans;
	}
	return ans;
}
int main(void){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin >> sx >> sy >> ax >> ay >> bx >> by;
	cin >> xs >> ys >> t;
	X.push_back(sx);
	Y.push_back(sy);
	for(int i = 1;i <= 100;i++){
		if(ax*X[i-1]+bx >= 1e16)
			break;
		if(ay*Y[i-1]+by >= 1e16)
			break;
		X.push_back(ax*X[i-1]+bx);
		Y.push_back(ay*Y[i-1]+by);
	}
	X.push_back(ax*X[X.size()-1]+bx);
	Y.push_back(ay*Y[Y.size()-1]+by);
	ll ans = 0;
	for(int i = 0;i < X.size();i++){
		ans = max(ans,solve(i));
		ans = max(ans,solve2(i));
	}
	cout << ans << endl;
	return 0;
}
