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
char s[10001];
ll target;
int flag;
int a[28],b[5],c[5],num;
void dfs(int x)
{
	if(x==5&&(b[0]-b[1]*b[1]+b[2]*b[2]*b[2]-b[3]*b[3]*b[3]*b[3]+b[4]*b[4]*b[4]*b[4]*b[4])==target)
	{
		flag=1;
		for(int i=0;i<5;i++)
			c[i]=b[i];
	}
	for(int i=1;i<=26;i++)
	{
		if(x==5)
			break;
		if(a[i])
		{
			b[x]=i;
			x++;
			a[i]--;
			dfs(x);
			x--;
			a[i]++;
		}
	}
	return;
}
int main()
{
	while(scanf("%lld%s",&target,s)!=EOF)
	{
		if(target==0&&strcmp(s,"END")==0)
			return 0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		flag=0;
		int len=strlen(s);
		sort(s,s+len);
		for(int i=0;i<len;i++)
		{
			if(a[s[i]-'A'+1]==0)
				a[s[i]-'A'+1]++;
		}
		dfs(0);
		if(flag)
		{
			for(int i=0;i<5;i++)
				printf("%c",c[i]+'A'-1);
			printf("\n");
		}
		else
			printf("no solution\n");
	}
	return 0;
}

