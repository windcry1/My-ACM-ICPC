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
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
char s[10001],c[10001],d[10001];//c存首字符，d存末字符 
int i=0,flag=0;
int vis[10001];
void dfs(char a)
{
	if(a=='m')
	{ 
		flag=1;
		return;
	} 
	for(int j=0;j<i;j++)
	{
		if(vis[j]==0&&c[j]==a)//如果没找过并且满足递推条件 
		{
			vis[j]=1;
			dfs(d[j]);
			vis[j]=0;
		}
	} 
}
int main()
{
	int j;
	while(scanf("%s",s)!=EOF)
	{
		flag=0;
		if(strcmp(s,"0"))
		{
			c[i]=s[0];d[i]=s[strlen(s)-1];
		}
		if(!strcmp(s,"0"))
		{
			for(j=0;j<i;j++)
			{
				memset(vis,0,sizeof(vis));
				if(c[j]=='b')//首字母是B，就dfs
				{
					vis[j]=1;//标记一下开头 
					dfs(d[j]);
					vis[j]=0; 
				}
			}
			if(flag)
				printf("Yes.\n");
			if(!flag)
				printf("No.\n");
		i=0;
		continue;
		}
		i++;
	}
	
	return 0;
}

