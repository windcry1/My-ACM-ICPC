/************************************************************
    > File Name: b.cpp
    > Author: TSwiftie
    > Mail: 2224273204@qq.com
    > Created Time: Thu 01 Aug 2019 12:59:17 PM CST
************************************************************/
 
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
//#include <unordered_map>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e6+6;
ll mod,mmod;
char ch[MAXN];
struct mat{
    ll m[2][2];
}unit;
mat msub(mat a,mat b){
    mat ret;
    ll x;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            x = 0;
            for(int k = 0;k < 2;k++){
                x += ((a.m[i][k] * b.m[k][j])+mod)%mod;
            }
            ret.m[i][j] = x%mod;
        }
    }
    return ret;
}
void init_unit(){
    for(int i = 0;i < 2;i++)
        unit.m[i][i] = 1;
}
mat qpow(mat a,ll x){
    mat ans = unit;
    while(x){
        if(x&1) ans = msub(ans,a);
        a = msub(a,a);
        x >>= 1;
    }
    return ans;
}
ll quick_pow(ll a,ll b){
    ll ret = 1;
    while(b){
        if(b&1) ret = ret * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ret;
}
ll eular(ll n){
    ll ans = n,a=n; 
    for(ll i = 2;i*i <= a;i++){
        if(a%i==0){
            ans = (ans/i*(i-1));
            while(a%i==0)
                a/=i;
        }
    }
    if(a > 1) ans = ans/a*(a-1);
    return ans;
}
ll getmod(ll n){
    int len = strlen(ch);
    ll ans = 0;
    for(int i = 0;i < len;i++)
        ans = (ll)(((ll)ans*10+ch[i]-'0')%n);
    return ans;
}
ll getdig(ll n){
    ll wei = 0;
    while(n){
        n/=10;
        ++wei;
    }
    return wei;
}
int main(void){
    init_unit();
    ll x0,x1,a,b;
    scanf("%lld %lld %lld %lld",&x0,&x1,&a,&b);
    mat t, ans;
    t.m[0][0] = a,t.m[0][1] = b;
    t.m[1][0] = 1,t.m[1][1] = 0;
    scanf("%s %lld",ch,&mod);
    if(strlen(ch)==1 && ch[0]=='0')
        printf("%lld\n",x0%mod);
    else if(strlen(ch)==1 && ch[0]=='1')
        printf("%lld\n",x1%mod);
    else{
    mmod = eular(mod);
    char sh[MAXN];
    sprintf(sh,"%lld",mmod);
    if(strlen(ch)==strlen(sh)){
        if(strcmp(ch,sh)>=0){
            for(int i = strlen(ch)-1;i >= 0;i--){
                if(ch[i]!='0'){
                    ch[i]--;
                    break;
                }
                ch[i] = '9';
            }
            ll power = getmod(mmod)+mmod;
            mod = mmod;
            ans = qpow(t,power);
        }else{
            ll power;
            sscanf(ch,"%lld",&power);
            ans = qpow(t,power-1);
        }
    }else if(strlen(ch) > strlen(sh)){
        for(int i = strlen(ch)-1;i >= 0;i--){
            if(ch[i]!='0'){
                ch[i]--;
                break;
            }
            ch[i] = '9';
        }
        ll power = getmod(mmod)+mmod;
        mod = mmod;
        ans = qpow(t,power);
    }else{
        ll power;
        sscanf(ch,"%lld",&power);
        ans = qpow(t,power-1);
    }
    cout << (ans.m[0][0]*x1 + ans.m[0][1]*x0)	 <<endl;
    }
    return 0;
}
