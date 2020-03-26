#include<cstdio>
#define MAX_N 20
#define ll long long
using namespace std;
int n;
ll f[MAX_N][MAX_N];
int main(){
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        f[0][i]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
        	if(j>0) f[i][j]+=f[i][j-1];
            f[i][j]+=f[i-1][j+1];
        }
    }
    printf("%lld",f[n][0]);
    return 0;
}
