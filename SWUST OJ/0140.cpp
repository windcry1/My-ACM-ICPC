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

char a[10],ans[10];
int len,vis[10]={0};
void dfs(int x)
{
	if(x==len)
	{
		ans[len]='\0';
		puts(ans);
		return;
	}
	for(int i=0;i<len;i++)//ans[x]的地方放a[i]
	{
		if(!vis[i])
		{
			ans[x]=a[i];
			vis[i]=1;
			dfs(x+1);
			vis[i]=0;
		}
	}
}
int main()
{
	scanf("%d",&len);
	for(int i=0;i<len;i++)
		a[i]=i+1+'0';
	a[len]='\0';
	dfs(0); 
	return 0;
}
