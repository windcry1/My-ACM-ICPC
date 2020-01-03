//How many ways 
//记忆化搜索 
#include<stdio.h>
#include<string.h>

int n,m,dp[105][105],p[105][105];
int solve(int x,int y);

int main()
{
	int t,i,j;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--){
			scanf("%d%d",&n,&m);
			for(i=1;i<=n;i++){
				for(j=1;j<=m;j++){
					scanf("%d",&p[i][j]);
				}
			}
			memset(dp,-1,sizeof(dp));
			dp[n][m]=1;//路径出口 
			printf("%d\n",solve(1,1));
		}
	}
	return 0;
}
int solve(int x,int y){
	int i,j;
	if(dp[x][y]>=0) return dp[x][y];//判断是否已走过 
	dp[x][y]=0;
	for(i=0;i<=p[x][y];i++){
		for(j=0;j<=p[x][y]-i;j++){
			if(x+i>=1&&y+j>=1&&x+i<=n&&y+j<=m){
				dp[x][y]=(dp[x][y]+solve(x+i,y+j))%10000;//转态转移方程
			}
		}
	} 
	return dp[x][y];
}
