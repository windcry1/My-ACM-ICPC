#include <iostream>
#include <cstring>
using namespace std;
int dp[1010][1010],aa[1010],bb[1010],w[1010],v[1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T;cin>>T;while(T--){
        int n,m,K;cin>>n>>m>>K;
        for(int i=1;i<=n;i++) cin>>w[i];
        for(int i=1;i<=n;i++) cin>>v[i];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
            for(int j=m;j>=v[i];j--){
            for(int k=1;k<=K;k++){
                aa[k]=dp[j-v[i]][k]+w[i];
                bb[k]=dp[j][k];
            }
            aa[K+1]=bb[K+1]=-1;
            int a=1,b=1,c=1;
            while(c<=K && (aa[a]!=-1 || bb[b]!=-1)){
                if(aa[a]>bb[b]) dp[j][c]=aa[a],++a;
                else dp[j][c]=bb[b],++b;
                if(dp[j][c]!=dp[j][c-1])
                    ++c;
            }
        }
    	cout<<dp[m][K]<<endl;
    }
    return 0;
}
