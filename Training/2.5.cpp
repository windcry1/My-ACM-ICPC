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
struct node
{
	int x,step;
};
int n,start,last;
int dir[2][201],vis[201];//dir��Ϊ�����������Ϻ����� 
int bfs(int start,int last)
{
	int i;
	queue<node> q;
	q.push(node{start,0});
	vis[start]=1;
	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		if(t.x==last)
			return t.step;
		for(int i=0;i<2;i++)
		{
			int dx=t.x+dir[i][t.x];
			if(dx>=0&&dx<n&&!vis[dx])//һά������� 
			{
				vis[dx]=1;
				q.push(node{dx,t.step+1});
			}
		}
	}
	return -1;
}
int main()
{
	int temp;
	while(scanf("%d",&n)!=EOF)//��������Ҫ�ֿ�,��Ϊ����Ϊ0ʱֹͣ 
	{
		if(n==0)
			return 0;
		scanf("%d%d",&start,&last);
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)//ÿһ�������¼��,������������ 
		{
			scanf("%d",&temp);
			dir[0][i]=temp;
			dir[1][i]=-temp;
		}
		int ans=bfs(start-1,last-1);//ע��˴�Ҫ-1,�ܵ���������ƺ�Ӱ�� 
			printf("%d\n",ans);
	}
	return 0;
}

