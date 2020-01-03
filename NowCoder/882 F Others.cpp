#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 30;
 
int d, n;
ll ans,tmp;
int v[maxn][maxn];
int a[maxn],b[maxn],posa,posb;
 
void dfs(int dep,ll sum) {
    if(dep == n) {
        ans = (ans < sum) ? sum:ans;
        return;
    }
    if(posa != d) {
        a[++posa] = dep;
        tmp = 0;
        for(int i = 1;i <= posb;++i) tmp += v[dep][b[i]];
        dfs(dep + 1,sum + tmp);
        --posa;
    }
    if(posb != d) {
        b[++posb] = dep;
        tmp = 0;
        for(int i = 1;i <= posa;++i) tmp += v[dep][a[i]];
        dfs(dep + 1,sum + tmp);
        --posb;
    }
}
 
int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    d = n;
    n <<= 1;
    for(int i = 0;i < n;++i) {
        for(int j = 0;j < n;++j) {
            cin>>v[i][j];
        }
    }
    dfs(0, 0);
   	cout<<ans<<endl;
    return 0;
}
