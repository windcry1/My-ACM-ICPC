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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
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
ll arr[1000010][3];
ll sum[1000010];
void add(int x,int d){
    if(!x)return ;
    while(x<1000010){
        sum[x]+=d;
        x+=(x&-x);
    }
}
ll ask(int x){
    ll ans=0;
    while(x){
        ans+=sum[x];
        x-=(x&-x);
    }
    return ans;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
    int n;
    ll ans=0,res=0;
    ll mres=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll k;
        cin>>k;
        arr[i][1]=0;arr[i][2]=1000010;
        int flag=0;
        for(int j=1;j<=k;j++){
            ll x;
            cin>>x;
            arr[i][1]=max(arr[i][1],x);
            arr[i][2]=min(arr[i][2],x);
            if(x>arr[i][2]) flag=1;
        }
        arr[i][0]=flag;
        if(flag) res++;
        else add(arr[i][2]+1,1);
    }
    for(int i=1;i<=n;i++) ans+=(arr[i][0]?n:(res+ask(arr[i][1])));
    cout<<ans<<endl;
}

