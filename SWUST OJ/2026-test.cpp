#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int dp[10005];
bool path[10005][10005];
int a[10005];
int main()
{
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    int N,V;
    while (cin>>N>>V)
    {
        memset(path,0,sizeof(path));
        memset(dp,0,sizeof(dp));
        for (int i = 1;i <= N;++i) cin>>a[i];
        for (int i = 1;i <= N;++i)
        {
            for (int j = V;j >= a[i];--j)
            {
            	if (dp[j] < dp[j-a[i]]+a[i])
            	{
            		dp[j] = dp[j-a[i]]+a[i];
            		path[i][j] = 1;
				}
            }
        }
        if(dp[V]==V)
        {
	        int first=0;
	        for (int i = 1,j = V;i <= N&&j > 0;i++)
	        {
	            if (path[i][j])
	            {
	            	if(first) putchar(' ');
	            	printf("%d",a[i]);
	            	j -= a[i];
	            	first=1;
				}
	        }
	        puts("");
	    }
	    else puts("No Solution!");
    }
    return 0;
}
