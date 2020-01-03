//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int dp[2001][2001];
bool judge(char a,char b)
{
	return a!=b;//不相等再走一次 
}
int main()
{
	char a[2001],b[2001];
	while(scanf("%s%s",a,b)!=EOF)
	{
		int len1=strlen(a);
		int len2=strlen(b);
		for(int i=0;i<=len1;i++)
			dp[i][0]=i;
		for(int i=0;i<=len2;i++)
			dp[0][i]=i;
		for(int i=1;i<=len1;i++)
		{
			for(int j=1;j<=len2;j++)
			{
				dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;//删除或插入 
				dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(judge(a[i-1],b[j-1])));//替换 
			}
		}
		printf("%d\n",dp[len1][len2]);
	}
	return 0;
}

