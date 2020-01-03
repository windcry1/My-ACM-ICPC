struct node
{
	int x,y,z,step;
};
int vis[51][51][51];
int dir[6][3]={{0,0,1},{0,0,-1},{0,-1,0},{0,1,0},{1,0,0},{-1,0,0}};
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
