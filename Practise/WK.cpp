#include<stdio.h>
#include<string.h>
char a[10000][20]={"bb"};char dp[10000];int n,p;
void dfs(int i)
{
	if(a[i][1]=='m') 
	{
		p=1;
		return;
	}

	for(int j=1;j<n;j++)
	{
		if(a[i][1]==a[j][0]&&!dp[j])
		{
			dp[j]=1;
			dfs(j);
			dp[j]=0;
		}
	}
}
int main()
{
   n=1; char s[20];int f=0;
   while(scanf("%s",s)&&s[0]!='0')
   {
   		a[n][0]=s[0];
   		int len=strlen(s);
   		a[n][1]=s[len-1];
   		if(a[n][0]=='b')f++;
   		n++;
   	}
	memset(dp,0,sizeof(dp));
	p=0; 
	dfs(0);
	if(p&&f)
		printf("Yes.\n");
	else 
		printf("No.\n");
	return 0;
}


