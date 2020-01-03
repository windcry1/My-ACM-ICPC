//看了题解做的简单的记忆化dp

#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int mp[110][110],dp[110][110];
int xx[]={1,-1,0,0};
int yy[]={0,0,1,-1};
int n,m;
int dfs(int x,int y)
{
    int ans=1;
    if(dp[x][y])return dp[x][y];
    for(int i=0;i<4;i++)
    {
        int dx=xx[i]+x,dy=yy[i]+y;
        if(dx>=0&&dy>=0&&dx<n&&dy<m)
        {
            if(mp[dx][dy]>mp[x][y])
                ans=max(ans,1+dfs(dx,dy));
        }
    }
    return dp[x][y]=ans;
}
int main()
{

    while(scanf("%d%d",&n,&m)!=EOF)
	{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){    
                scanf("%d",&mp[i][j]);
                dp[i][j]=0;
            }
        }
        int maxx=0;
        for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				maxx=max(maxx,dfs(i,j));
        printf("%d\n",maxx);
    }
    return 0;
}
