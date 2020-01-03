#include<stdio.h>
#include<string.h>

int Move_x[4]={0,1,0,-1},//四个方向 0：右 1：下2：左 3：上
	Move_y[4]={1,0,-1,0},book[120][5]={0};
	
void per(int x,int i)//把十进制的x的二进制存到book的第i行 
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
	getchar();//吸收第一个空格 
	gets(S);
	Len=strlen(S);
	for(i=0;i<Len;i++)
	{
		if(S[i]-'@'>0)
		per(S[i]-'@',i);//大写字母-'@' 
		else per(0,i);//否则就是空格	0 
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		ans[i][j]=-1;//预处理为-1； 
	}
	int k=0,x=0,y=0,dir=0;//ans[x][y]当前填的位置
							//dir表示当前方向，k表示填的第 几个数 
	
	while(k<5*Len)
	{
		ans[x][y]=book[k/5][k%5];
		if(ans[x+Move_x[dir]][y+Move_y[dir]]!=-1)
		dir=(dir+1)%4;//如果下个方向不能填就换方法 
		x+=Move_x[dir];//向当前方向前面走一步 
		y+=Move_y[dir];
		k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",ans[i][j]-1?0:ans[i][j]);
			//如果是-1，证明没填过，就输出0否则输出ans[i][j] 
		}
	}
	printf("\n");
	
return 0;
}
