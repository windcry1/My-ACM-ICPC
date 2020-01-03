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
char map[9][9];
int vis[9];
int n,m,sum,num;
void dfs(int x)//������������ 
{
	if(m==num)//��������˷���n�����ӣ���������+1
	{
		sum++;
		return;
	}
	if(x>n-1)//����Խ�� 
		return;
	for(int j=0;j<n;j++)
	{
		if(!vis[j] && map[x][j]=='#')//�����һ���ܷţ���ֱ�ӷŽ�ȥ��������+1 
		{
			vis[j]=1;//�����ǣ������ٴη��� 
			num++;
			dfs(x+1);
			num--;
			vis[j]=0;
		}
	}
	dfs(x+1); //�����һ��û�У���ֱ�ӽ�����һ�У��������� 
}
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==-1&&m==-1)
			return 0;
		sum=0;num=0;
		for(int i=0;i<n;i++)
			scanf("%s",map[i]);
		memset(vis,0,sizeof(vis));
		dfs(0); 
		printf("%d\n",sum);
	}
	
	return 0;
}

