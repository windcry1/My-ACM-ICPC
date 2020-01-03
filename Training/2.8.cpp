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
//priority_queue<int,vector<int>,greater<int> >pq;]
int times,a,b,c,k;
struct node
{
	int x,y,z,step;
};
int vis[51][51][51];
int dir[6][3]={{0,0,1},{0,0,-1},{0,-1,0},{0,1,0},{1,0,0},{-1,0,0}};//�������ɶȵ�ʸ�� 
int bfs(int x,int y,int z,int x1,int x2,int x3)
{
	int i;
	queue<node> q;
	q.push(node{x,y,z,0});
	vis[x][y][z]=1; 
	while(!q.empty())
	{
		node t=q.front();//���ʼ���Ǹ�Ԫ��
		q.pop();//ȡ����  
		if(t.step>times)
			return -1;//�����˷���-1 
		if(t.x==a-1&&t.y==b-1&&t.z==c-1&&t.step<=times)
			return t.step;//����ֱ�ӷ��ز��� 
		for(i=0;i<6;i++)//6��ά�� 
		{
			int dx=t.x+dir[i][0];//x���� 
			int dy=t.y+dir[i][1];//y���� 
			int dz=t.z+dir[i][2];//z���� 
			if(dx>=0&&dy>=0&&dz>=0&&dx<=x1&&dy<=x2&&dz<=x3&&!vis[dx][dy][dz])
			{
				q.push(node{dx,dy,dz,t.step+1});//�������ķŽ�ȥ 
				vis[dx][dy][dz]=1;
			}
		}
	}
	return -1;
}
int main()
{
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&times);
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				for(int k=0;k<c;k++)
				{
					scanf("%d",&vis[i][j][k]);
				}
			}
		}
		if(a==1&&b==1&&c==1)
			printf("0\n");
		else
		{
			int ans=bfs(0,0,0,a-1,b-1,c-1);//0,0,0��ʼa-1,b-1,c-1��β 
				printf("%d\n",ans);
		}
	}
	return 0;
}

