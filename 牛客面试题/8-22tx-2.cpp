#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define int long long
int a[10010];
const int mod = 1000000007;
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T;cin>>T;while(T--){
        int n;cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        
        long long  res=0,t=0;
        for(int i=0;i<n;i++){
            res = (res + a[i]+t)%mod;
            t = (t+a[i]) %mod;
        }
        cout<<res%mod<<endl;
    }
    return 0;
}
