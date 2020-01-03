#include<bits/stdc++.h>
using namespace std;
long long a[50][50],n;
long long Max=0;
int vis[50];
void dfs(int pos,int team1,int team2){
    //cout<<pos<<" "<<team1<<" "<<team2<<endl;
    if(pos>2*n || team1>n || team2>n)
        return;
    {
        long long ans = 0;
        if(team1==n){
            for(int i=1;i<=2*n;i++){
                if(vis[i]==1){
                    for(int j=1;j<=2*n;j++){
                        if(i==j || vis[j]==1) continue;
                        ans+=a[i][j];
                    }
                }
            }
        }
        else if(team2==n){
            for(int i=1;i<=2*n;i++){
                if(vis[i]==2){
                    for(int j=1;j<=2*n;j++){
                        if(i==j || vis[j]==2) continue;
                        ans+=a[i][j];
                    }
                }
            }
        }
        if(ans > Max)
            Max = ans;
    }
    vis[pos+1]=1;
    dfs(pos+1,team1+1,team2);
    vis[pos+1]=2;
    dfs(pos+1,team1,team2+1);
}
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=2*n;i++)
        for(int j=1;j<=2*n;j++)
            scanf("%lld",&a[i][j]);
    memset(vis,0,sizeof(vis));
    dfs(0,0,0);
    printf("%lld\n",Max);
    return 0;
}
