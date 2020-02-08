/************************************************************
    > File Name: G.cpp
    > Author: TSwiftie
    > Mail: 2224273204@qq.com
    > Created Time: Sat 08 Feb 2020 04:15:02 PM CST
************************************************************/
 
#pragma GCC optimize(2)
#include <bits/stdc++.h>
#include <ext/rope>
#define lowbit(x) (x&-x)
#define lc (o<<1)
#define rc (o<<1|1)
#define int long long
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
char ch[MAXN];
ll n,bit[MAXN];
struct Tr{
    ll bit[MAXN<<1];
    void add(ll x,ll val){
        while(x <= n){
            bit[x] += val;
            x += lowbit(x);
        }
    }
    ll ask(ll x,ll ans = 0){
        while(x){
            ans += bit[x];
            x -= lowbit(x);
        }
        return ans;
    }
    ll query(ll l,ll r){
        return ask(r)-ask(l-1);
    }
}st[2];
signed main(void){
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
    IOS;
    cin >> n;
    cin >> (ch+1);
    ll cnt = 0;
    for(int i = 1;i <= n;i++)
        if(ch[i]=='1') st[0].add(i,1),st[1].add(i,i),cnt++;
    ll ans = 0,p,op,pos;
    for(int i = 1;i <= n;i++)
        ans = (ans + (st[0].ask(i)*(cnt-st[0].ask(i)))%MOD)%MOD;
    cout << ans << endl;
    cin >> p;
    while(p--){
        cin >> op >> pos;
        if(op==1){
            ll prenum = st[0].ask(pos-1),sufnum = cnt-prenum;
            ll presum = st[1].ask(pos-1),sufsum = st[1].query(pos+1,n);
            ans = (ans + (sufsum-sufnum*pos) + (prenum*pos-presum))%MOD;
            st[0].add(pos,1);
            st[1].add(pos,pos);
            cnt++;
        }else{
            ll prenum = st[0].ask(pos-1),sufnum = cnt-prenum-1;
            ll presum = st[1].ask(pos-1),sufsum = st[1].query(pos+1,n);
            ans = (ans - (sufsum-sufnum*pos)%MOD + MOD - (prenum*pos-presum)%MOD + MOD)%MOD;
            st[0].add(pos,-1);
            st[1].add(pos,-pos);
            cnt--;
        }
        cout << ans << endl;
    }
    return 0;
}
