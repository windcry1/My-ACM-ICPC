#include<stdio.h>
#include<math.h>
#include<string.h>
int judge(int x){
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0) return 0;
	return 1;
}
int dp[210],c[210];
int main(){
	int cnt=0,i,j;
	for(i=2;i<=200;i++){
		if(judge(i)){
			cnt++;
			c[cnt]=i;
		}
	}
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(i=1;i<=46;i++){
		for(j=c[i];j<=200;j++){
		dp[j]+=dp[j-c[i]];
		}
	}
	int t;
	while(~scanf("%d",&t)){
		printf("%d\n",dp[t]);
	}
    return 0;
}
//
