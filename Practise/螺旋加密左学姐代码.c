#include<stdio.h>
#include<string.h>

int Move_x[4]={0,1,0,-1},//�ĸ����� 0���� 1����2���� 3����
	Move_y[4]={1,0,-1,0},book[120][5]={0};
	
void per(int x,int i)//��ʮ���Ƶ�x�Ķ����ƴ浽book�ĵ�i�� 
{
	int tem=4;
	while(x>0)
	{
		book[i][tem]=x%2;
		x/=2;
		tem--;
	} 
} 

int main()
{
	int n,m,Len=0,i,j,ans[25][25]={0};
	char S[150]; 
	scanf("%d%d",&n,&m);
	getchar();//���յ�һ���ո� 
	gets(S);
	Len=strlen(S);
	for(i=0;i<Len;i++)
	{
		if(S[i]-'@'>0)
		per(S[i]-'@',i);//��д��ĸ-'@' 
		else per(0,i);//������ǿո�	0 
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		ans[i][j]=-1;//Ԥ����Ϊ-1�� 
	}
	int k=0,x=0,y=0,dir=0;//ans[x][y]��ǰ���λ��
							//dir��ʾ��ǰ����k��ʾ��ĵ� ������ 
	
	while(k<5*Len)
	{
		ans[x][y]=book[k/5][k%5];
		if(ans[x+Move_x[dir]][y+Move_y[dir]]!=-1)
		dir=(dir+1)%4;//����¸���������ͻ����� 
		x+=Move_x[dir];//��ǰ����ǰ����һ�� 
		y+=Move_y[dir];
		k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",ans[i][j]-1?0:ans[i][j]);
			//�����-1��֤��û����������0�������ans[i][j] 
		}
	}
	printf("\n");
	
return 0;
}
